@interface AssistiveTouchHelper : NSObject

+ (void)initializeMonitoring;

- (void)enable;
- (void)installKeyboardListener;
- (void)_sendKeyboardStatusUpdateHidden;
- (void)_sendKeyboardStatusUpdate;
- (void)loadBuddyBundles;
- (void)_sendKeyboardStatusUpdate:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)_astDispatchQueue;
- (id)init;

@end
