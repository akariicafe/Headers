@class NSArray, MIOMultiArrayShapeConstraint, NSString;

@interface MIOMultiArrayConstraint : NSObject <MIOFeatureValueConstraint> {
    struct ArrayFeatureType { void /* function */ **_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; struct RepeatedField<long long> { int current_size_; int total_size_; struct Rep *rep_; } shape_; int _shape_cached_byte_size_; int datatype_; union ShapeFlexibilityUnion { struct ArrayFeatureType_EnumeratedShapes *enumeratedshapes_; struct ArrayFeatureType_ShapeRange *shaperange_; } ShapeFlexibility_; union DefaultOptionalValueUnion { int intdefaultvalue_; float floatdefaultvalue_; double doubledefaultvalue_; } defaultOptionalValue_; int _cached_size_; unsigned int _oneof_case_[2]; } _arrayFeatureTypeParams;
}

@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) long long dataType;
@property (readonly, copy, nonatomic) MIOMultiArrayShapeConstraint *shapeConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSpecification:(const void *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (const void *)arrayFeatureTypeSpecification;

@end
