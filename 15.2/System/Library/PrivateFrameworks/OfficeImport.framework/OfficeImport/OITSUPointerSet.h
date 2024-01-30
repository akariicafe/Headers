@interface OITSUPointerSet : NSSet {
    struct __CFSet { } *mSet;
}

+ (Class)privateMutableClass;
+ (Class)privateNonMutableClass;

- (id)objectEnumerator;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)allObjects;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)setByAddingObjectsFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0;
- (void)dealloc;
- (id)member:(id)a0;
- (id)setByAddingObject:(id)a0;
- (id)setByAddingObjectsFromSet:(id)a0;
- (id)initWithCFSet:(struct __CFSet { } *)a0;

@end
