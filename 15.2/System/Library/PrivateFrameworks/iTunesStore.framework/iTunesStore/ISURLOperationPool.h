@class ISOperationQueue;

@interface ISURLOperationPool : NSObject

@property (retain, nonatomic) ISOperationQueue *operationQueue;

- (id)init;
- (void)cancelOperation:(id)a0;
- (void)dealloc;
- (void)addOperation:(id)a0 withFlags:(long long)a1;
- (id)_poolOperationForOperation:(id)a0 flags:(long long)a1;

@end
