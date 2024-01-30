@class NSDictionary, VCPFaceGeometry;

@interface VCPFaceAnchor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly, nonatomic) VCPFaceGeometry *geometry;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 blendShapes:(id)a1 geometry:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
