@class NSOperationQueue;

@interface ADSerialWorkQueue : NSObject

@property (class, readonly, nonatomic) NSOperationQueue *primaryQueue;

+ (void)initialize;
+ (void)addOperation:(id /* block */)a0;
+ (void)releaseCancellableOperation:(unsigned long long)a0;
+ (void)addDelayedOperation:(double)a0 block:(id /* block */)a1;
+ (unsigned long long)addCancellableDelayedOperation:(double)a0 block:(id /* block */)a1;
+ (void)cancelDelayedOperation:(unsigned long long)a0;

@end
