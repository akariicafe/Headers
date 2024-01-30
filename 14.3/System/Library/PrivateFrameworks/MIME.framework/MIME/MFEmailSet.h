@interface MFEmailSet : EAEmailAddressSet {
    struct __CFSet { } *_set;
}

+ (id)set;

- (BOOL)isEqualToSet:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)_setupSetWithCapacity:(unsigned long long)a0;
- (id)serializedRepresentation;
- (void)intersectSet:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)dealloc;
- (void)setSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)unionSet:(id)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)allCommentedAddresses;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)initWithSet:(id)a0;
- (id)_generateAllObjectsFromSelector:(SEL)a0;
- (id)allObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)minusSet:(id)a0;

@end
