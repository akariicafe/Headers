@class VKARWalkingFeatureSet, VKARWalkingFeature;

@interface VKARWalkingFeatureDidUpdateInfo : NSObject {
    struct _retain_ptr<VKARWalkingFeature *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKARWalkingFeature *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _feature;
    struct _retain_ptr<VKARWalkingFeatureSet *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKARWalkingFeatureSet *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _featureSet;
    struct Unit<geo::DegreeUnitDescription, double> { double _value; } _screenHeading;
}

@property (readonly, nonatomic) long long updateTypes;
@property (readonly, nonatomic) VKARWalkingFeatureSet *featureSet;
@property (readonly, nonatomic) VKARWalkingFeature *feature;
@property (readonly, nonatomic) unsigned long long featureLabelIdentifier;
@property (readonly, nonatomic) struct { double latitude; double longitude; double altitude; } labelPosition;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isDirectlyBehind;
@property (readonly, nonatomic) double screenHeading;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFeature:(id)a0 featureLabelIdentifier:(unsigned long long)a1 featureSet:(id)a2 labelPosition:(const void *)a3 updateTypes:(long long)a4 isVisible:(BOOL)a5 isDirectlyBehind:(BOOL)a6 screenHeading:(struct Unit<geo::DegreeUnitDescription, double> { double x0; })a7;
- (id)stringForUpdateTypes;

@end
