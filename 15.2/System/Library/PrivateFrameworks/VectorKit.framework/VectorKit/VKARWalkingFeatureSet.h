@class NSArray;

@interface VKARWalkingFeatureSet : NSObject {
    struct _retain_ptr<NSArray<VKARWalkingFeature *> *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; NSArray *_obj; struct _retain_objc { } _retain; struct _release_objc { } _release; } _features;
}

@property long long state;
@property (readonly, nonatomic) unsigned long long uniqueIdentifier;
@property (readonly, nonatomic) NSArray *features;

- (id)initWithFeatures:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id).cxx_construct;

@end
