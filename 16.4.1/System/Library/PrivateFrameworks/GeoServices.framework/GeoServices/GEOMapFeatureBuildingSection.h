@class GEOVectorTile, GEOBuildingFootprintFeature;

@interface GEOMapFeatureBuildingSection : NSObject {
    GEOVectorTile *_tile;
    struct GeoCodecsDaVinciBuildingSection { BOOL _needsClosedBottom; unsigned char _extrusionType; float _topHeight; float _terrainElevation; unsigned int _loopsOffset; unsigned short _innerLoopsCount; } _section;
    struct { double x0; double x1; } *_coordinates;
    unsigned long long _coordinateCount;
    GEOBuildingFootprintFeature *_feature;
    unsigned long long _sectionIndex;
}

@property (readonly, nonatomic) struct { double x0; double x1; } *coordinates;
@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) double baseHeight;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double terrainElevation;
@property (readonly, nonatomic) double topHeight;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDaVinciTile:(id)a0 sectionIndex:(unsigned long long)a1;
- (id)initWithFeature:(id)a0 sectionIndex:(unsigned long long)a1;

@end
