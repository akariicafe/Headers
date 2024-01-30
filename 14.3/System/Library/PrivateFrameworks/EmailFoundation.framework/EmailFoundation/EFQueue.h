@class NSArray, NSMutableArray;
@protocol EFQueueingStrategy;

@interface EFQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) id<EFQueueingStrategy> strategy;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObjects;

+ (id)bufferedQueueWithCapacity:(unsigned long long)a0 batchHandler:(id /* block */)a1;
+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;

- (id)initWithStrategy:(id)a0;
- (void)enqueue:(id)a0 replaceIfExists:(BOOL)a1;
- (id)drain;
- (id)init;
- (void).cxx_destruct;
- (id)dequeue;
- (void)dequeueObject:(id)a0;
- (void)enqueue:(id)a0;
- (id)description;
- (id)peek;
- (id)debugDescription;

@end
