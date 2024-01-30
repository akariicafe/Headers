@class NSNumber, NSMutableDictionary;

@interface _DASPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (id)popLast;
- (id)allObjects;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)removeObject:(id)a0 atPriority:(unsigned long long)a1;
- (void)addObject:(id)a0 withPriority:(unsigned long long)a1;
- (id)popFirst;

@end
