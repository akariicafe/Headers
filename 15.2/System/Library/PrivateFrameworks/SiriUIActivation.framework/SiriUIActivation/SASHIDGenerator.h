@class NSObject;
@protocol OS_dispatch_queue;

@interface SASHIDGenerator : NSObject {
    struct __IOHIDEventSystemClient { } *_ioSystemClient;
    NSObject<OS_dispatch_queue> *_generatorQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)_sendHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)dealloc;
- (void)_sendHIDHoldHomeButton;
- (void)_sendHIDHoldLockButton;
- (void)sendHoldHomeButtonHIDEvents;
- (void)sendHoldLockButtonHIDEvents;

@end
