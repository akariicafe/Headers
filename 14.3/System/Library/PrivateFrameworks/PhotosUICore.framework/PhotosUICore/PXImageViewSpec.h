@class NSArray;

@interface PXImageViewSpec : PXViewSpec

@property (copy, nonatomic) NSArray *overlaySpecs;
@property (nonatomic) BOOL shouldEnableFocus;
@property (nonatomic) long long roundedCornersMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } floatingContentMotionRotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } floatingContentMotionTranslation;
@property (readonly, nonatomic) double floatingUnfocusedShadowOpacity;
@property (readonly, nonatomic) double floatingShadowOpacity;
@property (readonly, nonatomic) double floatingUnfocusedShadowRadius;
@property (readonly, nonatomic) double floatingShadowRadius;
@property (readonly, nonatomic) double floatingUnfocusedShadowVerticalOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } floatingUnfocusedShadowExpansion;
@property (readonly, nonatomic) double focusedSizeIncrease;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
