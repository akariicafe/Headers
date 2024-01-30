@class NSArray, NSMutableArray;
@protocol EFQueueingStrategy;

@interface EFQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) id<EFQueueingStrategy> strategy;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObjects;

+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;
+ (id)bufferedQueueWithCapacity:(unsigned long long)a0 batchHandler:(id /* block */)a1;

- (id)dequeue;
- (id)initWithStrategy:(id)a0;
- (void)enqueue:(id)a0 replaceIfExists:(BOOL)a1;
- (id)description;
- (id)drain;
- (void).cxx_destruct;
- (id)init;
- (id)peek;
- (void)dequeueObject:(id)a0;
- (void)enqueue:(id)a0;
- (id)debugDescription;

@end
