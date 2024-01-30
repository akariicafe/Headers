@class NSHashTable;

@interface _UISelectorSet : NSObject <NSCopying> {
    NSHashTable *_hash;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeSelector:(SEL)a0;
- (id)initWithHash:(id)a0;
- (id)initWithSelectors:(SEL)a0;
- (void)addSelector:(SEL)a0;
- (BOOL)containsSelector:(SEL)a0;
- (void)minusSet:(id)a0;
- (id)description;
- (void)intersectSet:(id)a0;
- (BOOL)containsSet:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateSelectorsUsingBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (void)unionSet:(id)a0;
- (BOOL)intersectsSet:(id)a0;

@end
