@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)signal;
- (void).cxx_destruct;
- (id)init;
- (void)wait;

@end
