@class NSOperationQueue;

@interface WLKDebouncingQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *queue;
@property unsigned int delay;

- (void)addOperationWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
