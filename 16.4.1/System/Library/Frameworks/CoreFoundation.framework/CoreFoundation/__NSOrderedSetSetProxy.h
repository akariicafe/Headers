@interface __NSOrderedSetSetProxy : NSSet {
    id _orderedSet;
}

- (id)initWithOrderedSet:(id)a0;
- (id)objectEnumerator;
- (id)member:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)dealloc;

@end
