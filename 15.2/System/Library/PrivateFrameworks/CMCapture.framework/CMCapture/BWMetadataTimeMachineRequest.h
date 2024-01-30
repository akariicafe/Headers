@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BWMetadataTimeMachineRequest : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)complete;
- (id)init;
- (void)dealloc;
- (void)waitForCompletionWithTimeout:(float)a0;

@end
