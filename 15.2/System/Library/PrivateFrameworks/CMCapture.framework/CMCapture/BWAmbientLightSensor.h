@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWAmbientLightSensor : NSObject {
    struct __IOHIDEventSystemClient { } *_hidSystemClient;
    NSObject<OS_dispatch_queue> *_alsQueue;
    NSObject<OS_dispatch_semaphore> *_exitSemaphore;
    int _luxLevel;
}

@property (readonly, nonatomic) int luxLevel;

+ (void)initialize;

- (id)init;
- (void)dealloc;

@end
