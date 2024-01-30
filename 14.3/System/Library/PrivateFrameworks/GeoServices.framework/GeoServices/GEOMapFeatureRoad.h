@class NSString, GEOMapFeatureJunction;

@interface GEOMapFeatureRoad : GEOMapFeatureLine {
    struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *_feature;
    unsigned long long _roadID;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    BOOL _checkedJunctionA;
    BOOL _checkedJunctionB;
}

@property (readonly, nonatomic) struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; } tileKey;
@property (readonly, nonatomic) struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *feature;
@property (readonly, nonatomic) unsigned long long featureIndex;
@property (readonly, nonatomic) BOOL isFlipped;
@property (readonly, nonatomic) unsigned long long roadID;
@property (readonly, nonatomic) GEOMapFeatureJunction *startJunction;
@property (readonly, nonatomic) GEOMapFeatureJunction *endJunction;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) int travelDirection;
@property (readonly, nonatomic) long long laneCount;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) unsigned long long speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) int walkableSide;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) int bikeableSide;
@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) NSString *internalRoadName;

+ (double)estimatedWidthForRoad:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a0;

- (void)flip;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_attributes;
- (void)updateForDesiredRoadDirectionality:(unsigned long long)a0 isOutboundRoad:(BOOL)a1;
- (id)_containingTile;
- (int)_flippedWalkableSideFor:(int)a0;
- (int)_flippedSidewalkSideFor:(int)a0;
- (int)_flippedBikeableSideFor:(int)a0;
- (int)_flippedBikeLaneSideFor:(int)a0;
- (id)localizedRoadName:(out id *)a0;
- (struct { float x0; float x1; } *)_tilePointsForSection:(unsigned long long)a0 withCount:(out unsigned long long *)a1;
- (id)initWithFeature:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a0;
- (id)debugDescription;
- (id)_junctionB;
- (id)_junctionA;

@end
