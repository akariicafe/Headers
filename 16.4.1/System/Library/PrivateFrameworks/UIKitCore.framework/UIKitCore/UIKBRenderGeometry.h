@class NSValue;

@interface UIKBRenderGeometry : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } paddedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } symbolFrame;
@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize { double width; double height; } concaveCornerOffset;
@property (nonatomic) struct CGPoint { double x; double y; } popupSource;
@property (nonatomic) double roundRectRadius;
@property (nonatomic) unsigned long long roundRectCorners;
@property (nonatomic) int popupBias;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (nonatomic) long long flickDirection;
@property (nonatomic) BOOL detachedVariants;
@property (nonatomic) BOOL tallPopup;
@property (retain, nonatomic) NSValue *splitLeftRect;
@property (retain, nonatomic) NSValue *splitRightRect;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } displayInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } paddedInsets;
@property (nonatomic) long long popupDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layeredBackgroundPaddedFrame;
@property (nonatomic) double layeredBackgroundRoundRectRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layeredForegroundPaddedFrame;
@property (nonatomic) double layeredForegroundRoundRectRadius;

+ (id)sortedGeometries:(id)a0 leftToRight:(BOOL)a1;
+ (id)geometryWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 paddedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)geometryWithShape:(id)a0;

- (id)watchVariantGeometries:(unsigned long long)a0 annotationIndex:(unsigned long long)a1;
- (void)overlayWithGeometry:(id)a0;
- (id)copyForPopupDirection:(long long)a0 scale:(double)a1;
- (unsigned long long)adjustForTranslucentGapsWithSize:(struct CGSize { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)iPhoneVariantGeometries:(unsigned long long)a0 annotationIndex:(unsigned long long)a1;
- (id)initWithShape:(id)a0;
- (void)makeIntegralWithScale:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)iPadVariantGeometries:(unsigned long long)a0 rowLimit:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)_copyForDirection:(long long)a0 positionFactor:(double)a1 inwardSizeFactor:(double)a2 outwardSizeFactor:(double)a3 perpendicularSizeFactor:(double)a4 sizeAspectRatio:(double)a5 scale:(double)a6;
- (id)similarShape;
- (void)adjustForConsistentGapsWithSize:(struct CGSize { double x0; double x1; })a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)description;
- (id)copyForFlickDirection:(long long)a0 scale:(double)a1;
- (void)applyShadowInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize { double x0; double x1; })a0 centerX:(double)a1 bottomEdge:(BOOL)a2 topEdge:(BOOL)a3;
- (void)applyOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)applyInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;

@end
