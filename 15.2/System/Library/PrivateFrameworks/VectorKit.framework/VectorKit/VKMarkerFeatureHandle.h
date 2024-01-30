@class GEOFeatureStyleAttributes;

@interface VKMarkerFeatureHandle : NSObject {
    struct MarkerFeatureHandle { unsigned char featureType; long long featureIndex; struct QuadTile { unsigned char _type; unsigned char _level; int _yIdx; int _xIdx; } key; int tileStyle; unsigned int tileVersion; struct shared_ptr<FeatureStyleAttributes> { struct FeatureStyleAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } styleAttributes; } _actualHandle;
    GEOFeatureStyleAttributes *_styleAttributes;
    int _featureType;
}

- (id)styleAttributes;
- (int)tileX;
- (int)tileY;
- (int)tileZ;
- (long long)featureIndex;
- (void).cxx_destruct;
- (int)tileStyle;
- (id)initWithMarkerHandle:(const void *)a0 featureType:(int)a1;
- (const void *)actualHandle;
- (unsigned int)tileVersion;
- (void)dealloc;
- (id).cxx_construct;
- (int)featureType;

@end
