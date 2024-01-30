@class NSArray;

@interface SXMosaicGalleryCluster : NSObject

@property (readonly, nonatomic) NSArray *items;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isClusterOfType:(int)a0;
- (BOOL)clusterIsEqualToTileTypes:(id)a0;

@end
