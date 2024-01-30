@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)waitForCompletion;
- (void)complete;
- (void).cxx_destruct;
- (id)init;

@end
