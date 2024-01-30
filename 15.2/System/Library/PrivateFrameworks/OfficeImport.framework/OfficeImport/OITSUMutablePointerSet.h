@interface OITSUMutablePointerSet : NSMutableSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (void)removeAllObjects;
- (id)allObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
