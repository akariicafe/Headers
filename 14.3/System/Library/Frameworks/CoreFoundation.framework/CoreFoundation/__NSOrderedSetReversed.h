@interface __NSOrderedSetReversed : NSOrderedSet {
    id _orderedSet;
    unsigned long long _cnt;
}

- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithOrderedSet:(id)a0;

@end
