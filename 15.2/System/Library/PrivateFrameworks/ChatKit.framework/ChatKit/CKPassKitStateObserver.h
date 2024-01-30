@interface CKPassKitStateObserver : NSObject

@property (nonatomic) BOOL passKitUIPresented;
@property (nonatomic) BOOL iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (void)_passKitUIDismissed;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIPresented;
- (id)description;
- (id)init;
- (void)prepareForResume;
- (void)dealloc;

@end
