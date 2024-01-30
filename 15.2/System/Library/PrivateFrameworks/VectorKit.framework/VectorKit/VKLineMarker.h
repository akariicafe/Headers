@class NSString;

@interface VKLineMarker : VKMarker {
    struct shared_ptr<md::LabelFeatureMarker> { struct LabelFeatureMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _labelFeatureMarker;
}

@property (readonly, nonatomic) NSString *localizedName;

+ (id)markerWithLabelFeatureMarker:(const void *)a0;

- (id)featureHandles;
- (void).cxx_destruct;
- (const void *)labelFeatureMarkerImpl;
- (id)initWithLabelFeatureMarkerPtr:(const void *)a0;
- (id).cxx_construct;

@end
