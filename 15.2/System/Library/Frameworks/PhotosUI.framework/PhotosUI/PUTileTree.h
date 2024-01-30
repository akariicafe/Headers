@class NSMutableDictionary;

@interface PUTileTree : NSObject <NSCopying>

@property (readonly, nonatomic) NSMutableDictionary *_objectsByTileIdentifier;
@property (readonly, nonatomic) BOOL useUniqueLeafs;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (id)initUsingUniqueLeafs:(BOOL)a0;
- (void)addObject:(id)a0 withTileIdentifier:(id)a1;
- (id)description;
- (id)objectWithTileIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObject:(id)a0 withTileIdentifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectWithTileIdentifier:(id)a0;
- (void)enumerateObjectsWithTileIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithTileTree:(id)a0;
- (BOOL)containsObject:(id)a0 withTileIdentifier:(id)a1;

@end
