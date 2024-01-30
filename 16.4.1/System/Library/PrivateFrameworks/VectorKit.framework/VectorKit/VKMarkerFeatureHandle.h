@class GEOFeatureStyleAttributes;

@interface VKMarkerFeatureHandle : NSObject {
    struct MarkerFeatureHandle { unsigned char featureType; long long featureIndex; struct QuadTile { unsigned char _type; unsigned char _level; int _yIdx; int _xIdx; } key; int tileStyle; unsigned int tileVersion; struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } styleAttributes; } _actualHandle;
    GEOFeatureStyleAttributes *_styleAttributes;
    int _featureType;
}

- (int)featureType;
- (id)styleAttributes;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)featureIndex;
- (int)tileStyle;
- (const void *)actualHandle;
- (id)initWithMarkerHandle:(const void *)a0 featureType:(int)a1;
- (unsigned int)tileVersion;
- (int)tileX;
- (int)tileY;
- (int)tileZ;

@end
