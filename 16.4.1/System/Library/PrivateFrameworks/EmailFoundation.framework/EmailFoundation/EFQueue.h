@class NSArray, NSMutableArray;
@protocol EFQueueingStrategy;

@interface EFQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) id<EFQueueingStrategy> strategy;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allObjects;

+ (id)priorityQueueWithComparator:(id /* block */)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0;
+ (id)boundedQueueWithCapacity:(unsigned long long)a0 overflowHandler:(id /* block */)a1;
+ (id)bufferedQueueWithCapacity:(unsigned long long)a0 batchHandler:(id /* block */)a1;

- (id)peek;
- (void)enqueue:(id)a0;
- (id)initWithStrategy:(id)a0;
- (void)enqueue:(id)a0 replaceIfExists:(BOOL)a1;
- (id)dequeue;
- (id)debugDescription;
- (id)drain;
- (void)dequeueObject:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
