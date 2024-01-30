@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor

@property (readonly, nonatomic) ARReferenceObject *referenceObject;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)name;
- (BOOL)isTracked;
- (void)encodeWithCoder:(id)a0;
- (id)initWithReferenceObject:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
