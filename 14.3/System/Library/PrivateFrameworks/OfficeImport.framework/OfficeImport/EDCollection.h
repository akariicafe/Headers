@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (unsigned long long)indexOfObject:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;

@end
