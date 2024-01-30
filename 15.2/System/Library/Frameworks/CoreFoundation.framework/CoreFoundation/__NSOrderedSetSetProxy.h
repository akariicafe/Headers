@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithOrderedSet:(id)a0;
- (void)dealloc;
- (id)member:(id)a0;

@end
