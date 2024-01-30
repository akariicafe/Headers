@class UIColor, UIBezierPath;
@protocol NTKRichComplicationBezelViewDelegate;

@interface NTKRichComplicationBezelView : NTKRichComplicationView {
    UIBezierPath *_hitTestPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hitTestBounds;
    long long _hitTestShape;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hitTestShapeFrame;
}

@property (retain, nonatomic) UIColor *bezelTextColor;
@property (nonatomic) double bezelTextWidthInRadius;
@property (nonatomic) double bezelTextAlpha;
@property (readonly, nonatomic) BOOL interactive;
@property (weak, nonatomic) id<NTKRichComplicationBezelViewDelegate> delegate;

+ (id)keylineImageWithFilled:(BOOL)a0 forDevice:(id)a1;
+ (id)_createHitTestPathWithViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shape:(long long)a1 shapeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forDevice:(id)a3;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForState:(long long)a0;
+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5 bezelTextUpdateHandler:(id /* block */)a6;
+ (id)keylineViewForDevice:(id)a0;
+ (id)layoutRuleForState:(long long)a0 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dialDiameter:(double)a2 forDevice:(id)a3;
+ (id)viewWithLegacyComplicationType:(unsigned long long)a0;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFamily:(long long)a0;
- (void)_updateHitTestShape:(long long)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setLayoutTransformToView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 rotationInDegree:(double)a2 centerScale:(double)a3;

@end
