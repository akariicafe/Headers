@class NSArray, NSMutableArray;
@protocol NAQueueingStrategy;

@interface NAQueue : NSObject {
    NSMutableArray *_buffer;
    id<NAQueueingStrategy> _strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;

- (id)peek;
- (void)enqueue:(id)a0;
- (id)initWithStrategy:(id)a0;
- (id)dequeue;
- (id)drain;
- (void)dequeueObject:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
