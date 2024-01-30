@class GEOFeature;

@interface GEOMultiSectionFeature : NSObject {
    void *_multiSectionFeature;
    GEOFeature *_feature;
}

@property (readonly, nonatomic) void *get;
@property (readonly, nonatomic) GEOFeature *feature;
@property (readonly, nonatomic) unsigned long long sectionOffset;
@property (readonly, nonatomic) unsigned long long sectionCount;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) int travelDirection;
@property (readonly, nonatomic) unsigned long long roadPointIndex;
@property (readonly, nonatomic) unsigned long long roadPointCount;
@property (readonly, nonatomic) unsigned int lineCrossingIndex;
@property (readonly, nonatomic) unsigned int lineCrossingCount;
@property (readonly, nonatomic) struct GeoCodecsLaneGeometry { float x0; float x1; float x2; float x3; float x4; float x5; } *laneGeometry;
@property (readonly, nonatomic) struct GeoCodecsAddressRange { unsigned short x0[2]; unsigned short x1[2]; } *addressRange;
@property (readonly, nonatomic) unsigned char speedLimit;
@property (readonly, nonatomic) BOOL displaySpeedIsLimited;
@property (readonly, nonatomic) unsigned char displaySpeedLimit;
@property (readonly, nonatomic) BOOL displaySpeedLimitIsMPH;
@property (readonly, nonatomic) BOOL reverseDirectionDisplaySpeedIsLimited;
@property (readonly, nonatomic) unsigned char reverseDirectionDisplaySpeedLimit;
@property (readonly, nonatomic) BOOL reverseDirectionDisplaySpeedLimitIsMPH;
@property (readonly, nonatomic) unsigned short roadWidth;
@property (readonly, nonatomic) unsigned int speedLimitShieldId;
@property (readonly, nonatomic) unsigned long long muid;

- (id)init:(void *)a0 withVectorTile:(id)a1;
- (union GeoCodecsVectorTileRect { struct { struct GeoCodecsVectorTilePoint { float x0; float x1; } x0; struct GeoCodecsVectorTilePoint { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } *)bounds;
- (void).cxx_destruct;

@end
