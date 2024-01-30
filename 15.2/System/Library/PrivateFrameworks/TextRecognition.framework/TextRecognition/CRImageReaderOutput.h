@class NSString, NSArray;

@interface CRImageReaderOutput : NSObject <CRCodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *stringValue;
@property int confidence;
@property float baselineAngle;
@property struct CGSize { double width; double height; } imageSize;
@property BOOL isTitle;
@property (readonly) NSString *type;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly) struct CGPoint { double x; double y; } topLeft;
@property (readonly) struct CGPoint { double x; double y; } topRight;
@property (readonly) struct CGPoint { double x; double y; } bottomRight;
@property (readonly) struct CGPoint { double x; double y; } bottomLeft;
@property (readonly) NSArray *candidates;
@property (readonly) NSArray *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)confidenceLevelForConfidenceScore:(double)a0 confidenceThresholds:(id)a1;
+ (id)outputWithType:(id)a0 textFeature:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 isTitle:(BOOL)a3 confidenceThresholdProvider:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)crCodableDataRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)cornersForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)boundingQuad;
- (id)initWithType:(id)a0 textFeature:(id)a1 withCandidates:(BOOL)a2 imageSize:(struct CGSize { double x0; double x1; })a3 isTitle:(BOOL)a4 confidenceThresholdProvider:(id)a5;
- (id)initWithType:(id)a0 textFeature:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 isTitle:(BOOL)a3 confidenceThresholdProvider:(id)a4;
- (id)quadForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initV2WithDataRepresentation:(id)a0;
- (id)initV1WithCoder:(id)a0;
- (id)decodeOutputsArrayFromData:(id)a0 offset:(unsigned long long *)a1 version:(long long)a2;
- (BOOL)isEqualToImageReaderOutput:(id)a0;
- (struct CGPoint { double x0; double x1; })_rotatePointIfNeccessary:(struct CGPoint { double x0; double x1; })a0 anchor:(struct CGPoint { double x0; double x1; })a1 angle:(double)a2;

@end
