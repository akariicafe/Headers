@class NSObject;
@protocol OS_dispatch_queue;

@interface MX_HIDEventObserver : NSObject {
    struct __IOHIDEventSystemClient { } *mHIDClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) BOOL smartCoverClosed;

- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (void)dealloc;
- (void)handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (id)init;

@end
