@protocol CSAccessoryStatusProviding, CSAccessoryStatusDelegate, NSObject;

@interface CSAccessoryStatusObserver : NSObject {
    id<NSObject> _attachmentNotificationToken;
    id<NSObject> _detachmentNotificationToken;
    id<NSObject> _animationStatusNotificationToken;
    id<CSAccessoryStatusProviding> _statusProvider;
}

@property (weak, nonatomic) id<CSAccessoryStatusDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoverSheetContext:(id)a0;
- (void)notifiedWithAccessoryAttached;
- (void)notifiedWithAccessoryDetached;
- (void)notifiedWithAccessoryAnimationStatusChanged;

@end
