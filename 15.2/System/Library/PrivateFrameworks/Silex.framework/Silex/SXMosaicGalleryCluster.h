@class NSArray;

@interface SXMosaicGalleryCluster : NSObject

@property (readonly, nonatomic) NSArray *items;

- (id)initWithItems:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isClusterOfType:(int)a0;
- (BOOL)clusterIsEqualToTileTypes:(id)a0;

@end
