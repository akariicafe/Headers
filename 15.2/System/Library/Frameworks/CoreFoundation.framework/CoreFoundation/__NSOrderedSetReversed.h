@interface __NSOrderedSetReversed : NSOrderedSet {
    id _orderedSet;
    unsigned long long _cnt;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (void)dealloc;
- (unsigned long long)indexOfObject:(id)a0;

@end
