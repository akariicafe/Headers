@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)wait;
- (void)signal;
- (id)init;
- (void).cxx_destruct;

@end
