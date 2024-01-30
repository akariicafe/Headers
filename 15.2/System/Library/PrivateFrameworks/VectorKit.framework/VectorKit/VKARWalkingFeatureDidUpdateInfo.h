@class VKARWalkingFeatureSet, VKARWalkingFeature;

@interface VKARWalkingFeatureDidUpdateInfo : NSObject {
    struct _retain_ptr<VKARWalkingFeature *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKARWalkingFeature *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _feature;
    struct _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKARWalkingFeatureSet *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _featureSet;
    struct Unit<DegreeUnitDescription, double> { double _value; } _screenHeading;
}

@property (readonly, nonatomic) long long updateTypes;
@property (readonly, nonatomic) VKARWalkingFeatureSet *featureSet;
@property (readonly, nonatomic) VKARWalkingFeature *feature;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } labelPosition;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isDirectlyBehind;
@property (readonly, nonatomic) double screenHeading;

- (id)stringForUpdateTypes;
- (id)initWithFeature:(id)a0 featureSet:(id)a1 labelPosition:(const void *)a2 updateTypes:(long long)a3 isVisible:(BOOL)a4 isDirectlyBehind:(BOOL)a5 screenHeading:(struct Unit<DegreeUnitDescription, double> { double x0; })a6;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
