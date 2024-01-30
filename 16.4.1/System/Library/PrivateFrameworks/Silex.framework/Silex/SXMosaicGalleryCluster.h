@class NSArray;

@interface SXMosaicGalleryCluster : NSObject

@property (readonly, nonatomic) NSArray *items;

- (BOOL)isEqual:(id)a0;
- (id)initWithItems:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)clusterIsEqualToTileTypes:(id)a0;
- (BOOL)isClusterOfType:(int)a0;

@end
