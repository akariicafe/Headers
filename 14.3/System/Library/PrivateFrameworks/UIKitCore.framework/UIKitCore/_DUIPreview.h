@class UIColor, UIBezierPath, UIDragPreviewParameters;

@interface _DUIPreview : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } viewScaleFactor;
@property (readonly, nonatomic) BOOL _springboardPlatterStyle;
@property (readonly, nonatomic) double backAlpha;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } boundingSize;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } contentSize;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } croppedScaledAnchorPoint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } croppedScaledSize;
@property (nonatomic) BOOL fadesHorizontally;
@property (nonatomic) BOOL fadesVertically;
@property (readonly, nonatomic) double liftAlpha;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } liftTransform;
@property (nonatomic) BOOL hidesSourceView;
@property (copy, nonatomic) UIBezierPath *outline;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic) struct CGPoint { double x; double y; } originalCenter;
@property (nonatomic) struct CGPoint { double x; double y; } originalCenterInCoordinateSpace;
@property (nonatomic) unsigned int coordinateSpaceSourceContextID;
@property (nonatomic) unsigned long long coordinateSpaceSourceLayerRenderID;
@property (nonatomic) double originalRotation;
@property (readonly, nonatomic, getter=isOversized) BOOL oversized;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scaledSize;
@property (readonly, nonatomic) double stackAlpha;
@property (nonatomic) BOOL textMode;
@property (nonatomic) long long previewMode;
@property (readonly, nonatomic) double topAlpha;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } unscaledAnchorPoint;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } unscaledSize;
@property (readonly, nonatomic) UIDragPreviewParameters *parameters;
@property (nonatomic) struct CGPoint { double x; double y; } liftAnchorPoint;
@property (nonatomic) BOOL avoidAnimation;
@property (nonatomic) BOOL wantsSuppressedMask;

+ (double)defaultStackAlpha;
+ (id)defaultPreviewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (double)_topOffset;
- (BOOL)isEqual:(id)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 outline:(id)a1;
- (id)initWithView:(id)a0 container:(id)a1 parameters:(id)a2 center:(struct CGPoint { double x0; double x1; })a3;
- (id)initWithView:(id)a0 container:(id)a1 parameters:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
