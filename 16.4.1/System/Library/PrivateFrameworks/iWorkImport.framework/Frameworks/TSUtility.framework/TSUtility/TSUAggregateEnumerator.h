@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator

@property (retain, nonatomic) NSMutableArray *objects;

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)nextObject;
- (void)addObject:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFirstObject:(id)a0 argumentList:(char *)a1;

@end
