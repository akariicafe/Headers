@class NSArray, NSMutableArray;
@protocol FMQueueingStrategy;

@interface FMQueue : NSObject {
    NSMutableArray *_buffer;
    id<FMQueueingStrategy> _strategy;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;

- (id)initWithStrategy:(id)a0;
- (id)drain;
- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (void)dequeueObject:(id)a0;
- (void)enqueue:(id)a0;
- (id)peek;

@end
