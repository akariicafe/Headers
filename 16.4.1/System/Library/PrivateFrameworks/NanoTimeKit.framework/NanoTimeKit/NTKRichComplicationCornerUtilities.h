@interface NTKRichComplicationCornerUtilities : NSObject

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_keylinePaddingForPosition:(long long)a0 conentSize:(struct CGSize { double x0; double x1; })a1 forDevice:(id)a2 narrowTopSlots:(BOOL)a3;
+ (id)viewWithLegacyComplicationType:(unsigned long long)a0;
+ (id)_createHitTestPathWithViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 position:(long long)a1 forDevice:(id)a2;
+ (id)keylineImageForPosition:(long long)a0 filled:(BOOL)a1 forDevice:(id)a2 narrowTopSlots:(BOOL)a3;
+ (id)keylineViewForPosition:(long long)a0 forDevice:(id)a1 narrowTopSlots:(BOOL)a2;
+ (id)layoutRuleForState:(long long)a0 position:(long long)a1 faceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 forDevice:(id)a3 narrowTopSlots:(BOOL)a4;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForState:(long long)a0 position:(long long)a1 device:(id)a2;
+ (void)updateCustomDataAnimationFromEarlierView:(id)a0 laterView:(id)a1 isForward:(BOOL)a2 animationType:(unsigned long long)a3 animationDuration:(double)a4 animationFraction:(float)a5;
+ (struct CGSize { double x0; double x1; })viewSizeForDevice:(id)a0;

@end
