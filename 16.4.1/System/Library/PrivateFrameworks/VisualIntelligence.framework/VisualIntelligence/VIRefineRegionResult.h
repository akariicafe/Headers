@class NSArray;

@interface VIRefineRegionResult : NSObject

@property (readonly, copy, nonatomic) NSArray *refinedRegions;
@property (readonly, nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (id)initWithRefinedRegions:(id)a0 version:(unsigned long long)a1;

@end
