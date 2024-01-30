@interface AssistiveTouchHelper : NSObject

+ (void)initializeMonitoring;

- (void)enable;
- (id)init;
- (void)dealloc;
- (void)_handleMediaPlaybackEnded;
- (void)installMediaCategoriesAndValidate;
- (void)_sendKeyboardStatusUpdateHidden;
- (void)_sendKeyboardStatusUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_sendKeyboardStatusUpdate;
- (id)_astDispatchQueue;
- (void)installMediaControlsListener;
- (void)installKeyboardListener;
- (void)loadBuddyBundles;
- (void)installiPodUICategoriesAndValidate;

@end
