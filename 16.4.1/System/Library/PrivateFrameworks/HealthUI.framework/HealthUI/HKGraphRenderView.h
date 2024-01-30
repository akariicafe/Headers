@class NSString;
@protocol HKGraphRenderDelegate;

@interface HKGraphRenderView : UIView <HKGraphRenderer>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } axisRect;
@property (weak, nonatomic) id<HKGraphRenderDelegate> renderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsRender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })drawAttributedText:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 horizontalAlignment:(long long)a2 verticalAlignment:(long long)a3 exclusion:(id)a4;
- (void)drawPath:(id)a0 strokeColor:(id)a1 fillColor:(id)a2 markerImage:(id)a3 useGradientFill:(BOOL)a4 blendMode:(int)a5 clipToAxes:(BOOL)a6;
- (struct CGSize { double x0; double x1; })drawText:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 spaceAvailable:(id)a2 horizontalAlignment:(long long)a3 verticalAlignment:(long long)a4 hyphenationFactor:(id)a5 textColor:(id)a6 font:(id)a7 clipToAxis:(BOOL)a8 exclusion:(id)a9;
- (void)fillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withFillStyle:(id)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 alpha:(double)a3;

@end
