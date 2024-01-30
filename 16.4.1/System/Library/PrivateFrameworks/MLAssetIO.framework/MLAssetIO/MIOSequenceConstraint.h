@class MIOFeatureDescription, NSString;

@interface MIOSequenceConstraint : NSObject <MIOFeatureValueConstraint> {
    struct SequenceFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; struct SizeRange *sizerange_; union TypeUnion { struct Int64FeatureType *int64type_; struct StringFeatureType *stringtype_; } Type_; int _cached_size_; unsigned int _oneof_case_[1]; } _sequenceFeatureTypeParams;
}

@property (readonly, nonatomic) MIOFeatureDescription *valueDescription;
@property (readonly, nonatomic) struct _MIORange { long long x0; long long x1; } countRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpecification:(const void *)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const void *)sequenceFeatureTypeSpecification;

@end
