@class NSMutableDictionary;

@interface NUGeometrySpaceMap : NSObject <NSCopying, NUTaggedSpaceMapping>

@property (retain) NSMutableDictionary *spaces;

+ (id)_reduceSpaces:(id)a0 withSpaces:(id)a1;
+ (BOOL)_canReduceSpaces:(id)a0 withSpaces:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)applyTransform:(id)a0;
- (unsigned long long)count;
- (void)addTagNode:(id)a0;
- (id)transformWithSourceSpace:(id)a0 destinationSpace:(id)a1 error:(out id *)a2;
- (id)initWithSpaceMap:(id)a0;
- (id)taggedSpacesForKey:(id)a0;
- (id)spacesForKey:(id)a0;
- (id)spaceForKey:(id)a0;
- (void)setSpace:(id)a0 forKey:(id)a1;
- (void)setSpaces:(id)a0 forKey:(id)a1;
- (void)setSpacesFromMap:(id)a0 andPruneAgainstTagNode:(id)a1 withPath:(id)a2;
- (void)mergeWithSpaceMap:(id)a0;

@end
