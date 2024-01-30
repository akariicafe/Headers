@class GEOMultiSectionFeature;

@interface GEORoadEdge : NSObject <NSCopying> {
    struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature *road; unsigned long long vertexIndexA; unsigned long long vertexIndexB; unsigned long long junctionIndexA; unsigned long long junctionIndexB; struct GeoCodecsConnectivityJunction *junctionA; struct GeoCodecsConnectivityJunction *junctionB; } _edge;
    GEOMultiSectionFeature *_feature;
}

@property (readonly, nonatomic) GEOMultiSectionFeature *road;
@property (readonly, nonatomic) unsigned long long vertexIndexA;
@property (readonly, nonatomic) unsigned long long vertexIndexB;
@property (readonly, nonatomic) unsigned long long junctionIndexA;
@property (readonly, nonatomic) unsigned long long junctionIndexB;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *junctionA;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *junctionB;

- (struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction *x5; struct GeoCodecsConnectivityJunction *x6; } *)get;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init:(struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction *x5; struct GeoCodecsConnectivityJunction *x6; } *)a0 withMultiSectionFeatureInterface:(id)a1;
- (void)setMultiSectionFeature:(id)a0;

@end
