@class NSNumber, NSMutableDictionary;

@interface _DASPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (id)init;
- (void).cxx_destruct;
- (id)popLast;
- (void)addObject:(id)a0 withPriority:(unsigned long long)a1;
- (id)description;
- (void)removeObject:(id)a0 atPriority:(unsigned long long)a1;
- (id)popFirst;
- (id)allObjects;

@end
