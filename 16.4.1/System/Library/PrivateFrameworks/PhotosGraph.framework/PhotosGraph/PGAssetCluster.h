@class NSArray, CLCircularRegion;

@interface PGAssetCluster : NSObject

@property (readonly, retain, nonatomic) NSArray *assets;
@property (readonly, retain, nonatomic) CLCircularRegion *region;

- (void).cxx_destruct;
- (id)initWithAssets:(id)a0 region:(id)a1;

@end
