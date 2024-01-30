@class NSDictionary, NSArray, SHAffinityGroup;

@interface SHRegionAffinityGroup : NSObject

@property (readonly, nonatomic) NSDictionary *geohashKeyedRegions;
@property (readonly, nonatomic) NSArray *regions;
@property (readonly, nonatomic) SHAffinityGroup *affinityGroup;

- (void).cxx_destruct;
- (id)regionsForGeohash:(id)a0;
- (id)initWithRegions:(id)a0 affinityGroup:(id)a1;

@end
