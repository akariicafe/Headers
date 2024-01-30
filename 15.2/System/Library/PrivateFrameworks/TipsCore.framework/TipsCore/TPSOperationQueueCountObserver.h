@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject

@property (nonatomic) unsigned long long lastOperationCount;
@property (weak, nonatomic) TPSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
