@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor

@property (readonly, nonatomic) ARReferenceObject *referenceObject;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)initWithAnchor:(id)a0;
- (id)initWithReferenceObject:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
