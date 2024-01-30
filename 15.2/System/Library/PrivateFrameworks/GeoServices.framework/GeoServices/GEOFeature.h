@class GEOVectorTile, GEOFeatureStyleAttributes;

@interface GEOFeature : NSObject {
    GEOVectorTile *_containingTile;
    void *_feature;
    GEOFeatureStyleAttributes *_attributes;
}

@property (readonly, nonatomic) GEOVectorTile *containingTile;
@property (readonly, nonatomic) const char *name;
@property (readonly, nonatomic) unsigned long long labelOffset;
@property (readonly, nonatomic) unsigned long long labelCount;
@property (readonly, nonatomic) unsigned long long shieldOffset;
@property (readonly, nonatomic) unsigned long long shieldCount;
@property (readonly, nonatomic) unsigned int styleID;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) BOOL hasBusinessID;
@property (readonly, nonatomic) unsigned long long businessID;
@property (readonly, nonatomic) float minZoomRank;
@property (readonly, nonatomic) unsigned long long flyoverAnimationID;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *attributes;
@property (readonly, nonatomic) int type;

- (void *)get;
- (id)init:(void *)a0 withVectorTile:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
