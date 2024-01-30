@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)wait;
- (id)init;
- (void).cxx_destruct;
- (void)signal;

@end
