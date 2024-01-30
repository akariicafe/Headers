@class NSConditionLock;

@interface RMSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)waitForCompletion;
- (void)complete;
- (void).cxx_destruct;
- (id)init;

@end
