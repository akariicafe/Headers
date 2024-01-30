@class ARReferenceObject;

@interface ARObjectAnchor : ARAnchor

@property (readonly, nonatomic) ARReferenceObject *referenceObject;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAnchor:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)name;
- (BOOL)isTracked;
- (id)initWithReferenceObject:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;

@end
