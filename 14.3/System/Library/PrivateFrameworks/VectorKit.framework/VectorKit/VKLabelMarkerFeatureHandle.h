@class GEOFeatureStyleAttributes;

@interface VKLabelMarkerFeatureHandle : NSObject {
    struct LabelMarkerFeatureHandle { unsigned char featureType; long long featureIndex; struct MercatorTile { unsigned char _level; int _latIdx; int _lonIdx; } key; int tileStyle; unsigned int tileVersion; GEOFeatureStyleAttributes *styleAttributes; } _actualHandle;
}

- (id)styleAttributes;
- (int)tileX;
- (int)tileY;
- (int)tileZ;
- (void)dealloc;
- (id)initWithLabelMarkerHandle:(const struct LabelMarkerFeatureHandle { unsigned char x0; long long x1; struct MercatorTile { unsigned char x0; int x1; int x2; } x2; int x3; unsigned int x4; id x5; } *)a0;
- (const struct LabelMarkerFeatureHandle { unsigned char x0; long long x1; struct MercatorTile { unsigned char x0; int x1; int x2; } x2; int x3; unsigned int x4; id x5; } *)actualHandle;
- (unsigned int)tileVersion;
- (id).cxx_construct;
- (int)tileStyle;
- (long long)featureIndex;
- (int)featureType;

@end
