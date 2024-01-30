@class NSHashTable;

@interface _UISelectorSet : NSObject <NSCopying> {
    NSHashTable *_hash;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)initWithHash:(id)a0;
- (void)intersectSet:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unionSet:(id)a0;
- (unsigned long long)hash;
- (BOOL)intersectsSet:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)removeSelector:(SEL)a0;
- (BOOL)containsSet:(id)a0;
- (id)initWithSelectors:(SEL)a0;
- (BOOL)containsSelector:(SEL)a0;
- (void)addSelector:(SEL)a0;
- (void)enumerateSelectorsUsingBlock:(id /* block */)a0;
- (void)minusSet:(id)a0;

@end
