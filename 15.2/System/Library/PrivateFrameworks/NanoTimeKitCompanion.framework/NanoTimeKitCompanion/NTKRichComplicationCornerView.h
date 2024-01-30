@class UIBezierPath;

@interface NTKRichComplicationCornerView : NTKRichComplicationView {
    UIBezierPath *_hitTestPath;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _hitTestBounds;
}

@property (nonatomic) double innerComponentRotationInDegree;
@property (nonatomic) double outerComponentRotationInDegree;
@property (nonatomic) long long position;

+ (id)viewWithLegacyComplicationType:(unsigned long long)a0;
+ (id)layoutRuleForState:(long long)a0 position:(long long)a1 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forDevice:(id)a3 narrowTopSlots:(BOOL)a4;
+ (id)keylineViewForPosition:(long long)a0 forDevice:(id)a1 narrowTopSlots:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })viewSizeForDevice:(id)a0;
+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylinePaddingForPosition:(long long)a0 conentSize:(struct CGSize { double x0; double x1; })a1 forDevice:(id)a2 narrowTopSlots:(BOOL)a3;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForState:(long long)a0 position:(long long)a1 device:(id)a2;
+ (id)keylineImageForPosition:(long long)a0 filled:(BOOL)a1 forDevice:(id)a2 narrowTopSlots:(BOOL)a3;
+ (id)_createHitTestPathWithViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(long long)a1 forDevice:(id)a2;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFamily:(long long)a0;
- (void)_editingDidEnd;
- (id)_createAndAddColoringLabelWithFontSize:(double)a0;
- (void)_layoutView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 editingTranslation:(struct CGPoint { double x0; double x1; })a2 editingRotationInDegree:(double)a3;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (void)_layoutCurvedLabel:(id)a0 centerAngleInDegree:(double)a1 editingRotationInDegree:(double)a2;

@end
