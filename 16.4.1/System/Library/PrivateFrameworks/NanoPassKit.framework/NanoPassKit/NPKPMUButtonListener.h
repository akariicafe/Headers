@interface NPKPMUButtonListener : NPKButtonListener

@property (nonatomic) struct __IOHIDEventSystemClient { } *hidSystemClient;

- (void)dealloc;
- (id)init;
- (void)_handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (void)_initializeHIDClient;

@end
