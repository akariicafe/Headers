@interface NPKPMUButtonListener : NPKButtonListener

@property (nonatomic) struct __IOHIDEventSystemClient { } *hidSystemClient;

- (id)init;
- (void)dealloc;
- (void)_handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (void)_initializeHIDClient;

@end
