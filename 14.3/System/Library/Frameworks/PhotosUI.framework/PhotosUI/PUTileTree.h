@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier;
@property (readonly, nonatomic) BOOL useUniqueLeafs;

- (void)removeObjectWithTileIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTileTree:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectWithTileIdentifier:(id)a0;
- (id)description;
- (BOOL)containsObject:(id)a0 withTileIdentifier:(id)a1;
- (void)enumerateObjectsWithTileIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)addObject:(id)a0 withTileIdentifier:(id)a1;
- (void)removeObject:(id)a0 withTileIdentifier:(id)a1;
- (void)removeAllObjects;
- (id)initUsingUniqueLeafs:(BOOL)a0;

@end
