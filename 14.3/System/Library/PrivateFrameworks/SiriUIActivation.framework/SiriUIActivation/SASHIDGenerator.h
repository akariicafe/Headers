@class NSObject;
@protocol OS_dispatch_queue;

@interface SASHIDGenerator : NSObject {
    struct __IOHIDEventSystemClient { } *_ioSystemClient;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_sendHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_sendHIDHoldHomeButton;
- (void)_sendHIDHoldLockButton;
- (void)sendHoldHomeButtonHIDEvents;
- (void)sendHoldLockButtonHIDEvents;

@end
