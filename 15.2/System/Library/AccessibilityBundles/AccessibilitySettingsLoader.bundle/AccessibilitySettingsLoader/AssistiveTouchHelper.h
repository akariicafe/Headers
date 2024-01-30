@interface AssistiveTouchHelper : NSObject

+ (void)initializeMonitoring;

- (void)enable;
- (void)loadBuddyBundles;
- (void)_sendKeyboardStatusUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)dealloc;
- (void)installKeyboardListener;
- (id)_astDispatchQueue;
- (void)_sendKeyboardStatusUpdate;
- (void)_sendKeyboardStatusUpdateHidden;

@end
