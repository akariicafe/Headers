@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
    NSMutableArray *mObjects;
}

+ (id)collection;
+ (id)collectionWithObject:(id)a0;

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)removeAllObjects;
- (id)description;
- (id)initWithObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)count;
- (unsigned long long)hash;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;
- (unsigned long long)addOrEquivalentObject:(id)a0;

@end
