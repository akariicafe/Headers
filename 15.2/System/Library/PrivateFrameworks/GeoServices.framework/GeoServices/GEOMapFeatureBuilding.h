@class NSArray, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuilding : NSObject {
    GEOBuildingFootprintFeature *_feature;
}

@property (readonly, nonatomic) NSArray *sections;

- (id)initWithFeature:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
