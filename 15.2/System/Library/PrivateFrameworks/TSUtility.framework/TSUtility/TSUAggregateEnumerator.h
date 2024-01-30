@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)nextObject;
- (id)init;
- (id)initWithObjects:(id)a0;
- (void)addObject:(id)a0;
- (void)dealloc;
- (id)initWithFirstObject:(id)a0 argumentList:(char *)a1;

@end
