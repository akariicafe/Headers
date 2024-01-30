@class HKVisionPrism, HKQuantity;

@interface HKGlassesLensSpecification : HKLensSpecification <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *vertexDistance;
@property (readonly, copy, nonatomic) HKVisionPrism *prism;
@property (readonly, copy, nonatomic) HKQuantity *farPupillaryDistance;
@property (readonly, copy, nonatomic) HKQuantity *nearPupillaryDistance;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSphere:(id)a0 cylinder:(id)a1 axis:(id)a2 addPower:(id)a3 vertexDistance:(id)a4 prism:(id)a5 farPupillaryDistance:(id)a6 nearPupillaryDistance:(id)a7;

@end
