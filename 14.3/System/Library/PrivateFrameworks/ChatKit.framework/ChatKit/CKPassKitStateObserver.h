@interface CKPassKitStateObserver : NSObject

@property (nonatomic) BOOL passKitUIPresented;
@property (nonatomic) BOOL iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_passKitUIDismissed;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIPresented;
- (void)prepareForResume;

@end
