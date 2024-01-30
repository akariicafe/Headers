@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier;
@property (readonly, nonatomic) BOOL useUniqueLeafs;

- (void)removeObject:(id)a0 withTileIdentifier:(id)a1;
- (void)removeObjectWithTileIdentifier:(id)a0;
- (id)objectWithTileIdentifier:(id)a0;
- (BOOL)containsObject:(id)a0 withTileIdentifier:(id)a1;
- (id)initWithTileTree:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (void)enumerateObjectsWithTileIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)initUsingUniqueLeafs:(BOOL)a0;
- (id)init;
- (void)addObject:(id)a0 withTileIdentifier:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
