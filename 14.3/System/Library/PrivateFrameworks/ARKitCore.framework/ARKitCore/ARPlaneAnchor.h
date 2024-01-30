@class ARPatchGrid, NSString, NSDictionary, ARPlaneGeometry;

@interface ARPlaneAnchor : ARAnchor

@property (class, readonly, nonatomic, getter=isClassificationSupported) BOOL classificationSupported;

@property (nonatomic) void /* unknown type, empty encoding */ center;
@property (nonatomic) void /* unknown type, empty encoding */ extent;
@property (retain) ARPlaneGeometry *geometry;
@property (retain, nonatomic) ARPatchGrid *gridExtent;
@property (nonatomic) float uncertaintyAlongNormal;
@property (nonatomic) long long worldAlignmentRotation;
@property (nonatomic) long long classificationStatus;
@property (nonatomic) long long classification;
@property (copy, nonatomic) NSDictionary *possibleClassifications;
@property (retain, nonatomic) NSString *classificationLabel;
@property (readonly, nonatomic) long long alignment;

+ (BOOL)supportsSecureCoding;

- (id)_description:(BOOL)a0;
- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)initWithAnchor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (float)area;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 alignment:(long long)a2;
- (id)_hitTestFromOrigin:(id)a0 withDirection:(SEL)a1 usingExtent:(BOOL)a2 usingGeometry:(BOOL)a3;

@end
