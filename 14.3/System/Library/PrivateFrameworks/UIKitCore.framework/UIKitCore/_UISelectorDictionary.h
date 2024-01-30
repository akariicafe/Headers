@class NSArray, _UISelectorSet, NSMapTable;

@interface _UISelectorDictionary : NSObject <NSCopying> {
    NSMapTable *_map;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) _UISelectorSet *allSelectors;
@property (readonly, nonatomic) NSArray *allObjects;

- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForSelector:(SEL)a0;
- (id)init;
- (void)setObject:(id)a0 forSelector:(SEL)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMap:(id)a0;
- (void)removeObjectForSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateSelectorsAndObjectsUsingBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMapping:(id /* block */)a0 objects:(id)a1;
- (void)removeObjectsForSelectors:(id)a0;

@end
