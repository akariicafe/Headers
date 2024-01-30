@protocol CSMagSafeAccessoryStatusProviding, CSMagSafeAccessoryStatusDelegate, NSObject;

@interface CSMagSafeAccessoryStatusObserver : NSObject {
    id<NSObject> _attachmentNotificationToken;
    id<NSObject> _detachmentNotificationToken;
    id<NSObject> _animationStatusNotificationToken;
    id<CSMagSafeAccessoryStatusProviding> _statusProvider;
}

@property (weak, nonatomic) id<CSMagSafeAccessoryStatusDelegate> delegate;

- (void)notifiedWithAccessoryAnimationStatusChanged;
- (void)notifiedWithAccessoryAttached;
- (void)dealloc;
- (id)initWithCoverSheetContext:(id)a0;
- (void).cxx_destruct;
- (void)notifiedWithAccessoryDetached;

@end
