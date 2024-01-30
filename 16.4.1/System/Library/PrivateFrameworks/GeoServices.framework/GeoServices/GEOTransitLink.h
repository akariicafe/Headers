@class GEOVectorTile;

@interface GEOTransitLink : NSObject {
    void *_transitLink;
    GEOVectorTile *_containingTile;
}

@property (readonly, nonatomic) GEOVectorTile *containingTile;
@property (readonly, nonatomic) unsigned int sectionOffset;
@property (readonly, nonatomic) unsigned int sectionCount;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *transitIndexRange;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *fromJunction;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature *x2; unsigned long long x3; unsigned long long x4; } *toJunction;
@property (readonly, nonatomic) unsigned long long fromNodeID;
@property (readonly, nonatomic) unsigned long long toNodeID;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *travelTimeIndexRange;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *shieldIndexRange;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *originalNodeIDPointerIndexRange;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *collapsedNodesIndexRange;
@property (readonly, nonatomic) struct GeoCodecsRange { unsigned long long x0; unsigned long long x1; } *collapsedNodesIDRange;

- (void *)get;
- (void).cxx_destruct;
- (id)init:(void *)a0 withVectorTile:(id)a1;

@end
