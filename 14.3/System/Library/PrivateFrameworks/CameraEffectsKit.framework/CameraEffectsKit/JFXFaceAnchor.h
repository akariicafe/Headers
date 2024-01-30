@interface JFXFaceAnchor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } transform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceRect;
@property (nonatomic) double focalLength;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ screenRelativePosition;
@property (readonly, nonatomic) double rollAngle;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraTransform;
@property (nonatomic) struct CGSize { double width; double height; } imageResolution;
@property (nonatomic) long long preferredAnchorOrientation;

+ (id)faceAnchorWithARFrame:(id)a0 forInterfaceOrientation:(long long)a1 withFaceRectScaleFactor:(struct CGSize { double x0; double x1; })a2;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })CFX_mirrorPoseTransformLeftRight:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (double)focalLengthForViewport:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 needsMirroring:(BOOL)a2 withFaceRectScaleFactor:(struct CGSize { double x0; double x1; })a3 frameImageResolution:(struct CGSize { double x0; double x1; })a4 preferredAnchorOrientation:(long long)a5;

@end
