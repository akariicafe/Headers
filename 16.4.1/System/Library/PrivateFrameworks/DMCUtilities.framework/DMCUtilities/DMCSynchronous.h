@class NSConditionLock;

@interface DMCSynchronous : NSObject {
    NSConditionLock *_lock;
}

- (void)complete;
- (void)waitForCompletion;
- (id)init;
- (void).cxx_destruct;

@end
