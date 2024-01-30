@class NSString, GEOFeatureStyleAttributes;

@interface VKFeatureMarker : NSObject {
    struct shared_ptr<md::FeatureMarker> { struct FeatureMarker *__ptr_; struct __shared_weak_count *__cntrl_; } _actualFeatureMarker;
}

@property (readonly) const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker *x0; struct __shared_weak_count *x1; } *actualFeatureMarker;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) unsigned long long featureID;
@property (readonly, nonatomic) unsigned long long venueID;
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;

+ (id)markerWithFeatureMarker:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker *x0; struct __shared_weak_count *x1; } *)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFeatureMarkerPtr:(const struct shared_ptr<md::FeatureMarker> { struct FeatureMarker *x0; struct __shared_weak_count *x1; } *)a0;

@end
