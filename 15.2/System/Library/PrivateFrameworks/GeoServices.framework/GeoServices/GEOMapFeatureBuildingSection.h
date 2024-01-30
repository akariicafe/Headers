@class GEOVectorTile, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuildingSection : NSObject {
    struct { double x0; double x1; } *_coordinates;
    unsigned long long _coordinateCount;
    GEOBuildingFootprintFeature *_feature;
    unsigned long long _sectionIndex;
    GEOVectorTile *_tile;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double baseHeight;
@property (readonly, nonatomic) double height;

- (id)initWithFeature:(id)a0 sectionIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
