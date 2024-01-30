@interface __NSOrderedSetReversed : NSOrderedSet {
    id _orderedSet;
    unsigned long long _cnt;
}

- (id)initWithOrderedSet:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;

@end
