@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void)waitForCompletion;
- (id)init;
- (void).cxx_destruct;

@end
