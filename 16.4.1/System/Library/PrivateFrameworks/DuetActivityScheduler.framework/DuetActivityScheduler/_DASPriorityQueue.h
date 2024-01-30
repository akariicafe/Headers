@class NSNumber, NSMutableDictionary;

@interface _DASPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (id)popLast;
- (void)removeObject:(id)a0 atPriority:(unsigned long long)a1;
- (void)addObject:(id)a0 withPriority:(unsigned long long)a1;
- (id)allObjects;
- (id)init;
- (id)description;
- (id)popFirst;
- (void).cxx_destruct;

@end
