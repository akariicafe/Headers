@interface MFEmailSet : EAEmailAddressSet {
    struct __CFSet { } *_set;
}

+ (id)set;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addObject:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSubsetOfSet:(id)a0;
- (void)removeObject:(id)a0;
- (id)objectEnumerator;
- (BOOL)isEqualToSet:(id)a0;
- (id)member:(id)a0;
- (void)intersectSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)intersectsSet:(id)a0;
- (id)serializedRepresentation;
- (void)unionSet:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)setSet:(id)a0;
- (id)allObjects;
- (id)init;
- (id)initWithSet:(id)a0;
- (id)_generateAllObjectsFromSelector:(SEL)a0;
- (void)_setupSetWithCapacity:(unsigned long long)a0;
- (void)minusSet:(id)a0;
- (id)allCommentedAddresses;

@end
