@interface AXMRectangleDetectorNode : AXMEvaluationNode

@property (nonatomic) double cameraPixelFocalLength;
@property (nonatomic) struct CGPoint { double x; double y; } cameraOpticalOrigin;
@property (nonatomic) double minimumAspectRatio;
@property (nonatomic) double maximumAspectRatio;
@property (nonatomic) double quadratureTolerance;
@property (nonatomic) double minimumSize;
@property (nonatomic) long long maximumNumberOfRects;

+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;

- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)requiresVisionFramework;
- (void)encodeWithCoder:(id)a0;

@end
