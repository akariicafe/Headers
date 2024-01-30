@interface CKPassKitStateObserver : NSObject

@property (nonatomic) BOOL passKitUIPresented;
@property (nonatomic) BOOL iTunesStoreDialogPresented;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)_iTunesStoreDialogDidDismiss;
- (void)_iTunesStoreDialogWillDisplay;
- (void)_passKitUIDismissed;
- (void)_passKitUIPresented;
- (void)prepareForResume;

@end
