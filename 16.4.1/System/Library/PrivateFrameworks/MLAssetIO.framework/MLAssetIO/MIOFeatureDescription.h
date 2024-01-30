@class NSString;
@protocol MIOFeatureValueConstraint;

@interface MIOFeatureDescription : NSObject <NSMutableCopying> {
    struct FeatureDescription { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; struct ArenaStringPtr { void *ptr_; } name_; struct ArenaStringPtr { void *ptr_; } shortdescription_; struct FeatureType *type_; int _cached_size_; } _featureDescriptionParams;
    NSString *_cachedName;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL optional;
@property (readonly, copy, nonatomic) id<MIOFeatureValueConstraint> constraint;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)setShortDescription:(id)a0;
- (const void *)featureDescriptionSpecification;

@end
