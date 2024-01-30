@interface ARUIRingsImageFactory : NSObject

+ (id)_renderRingsUsingRingsView:(id)a0 withDiameter:(double)a1 thickness:(double)a2 interspacing:(double)a3;
+ (id)renderRingGroup:(id)a0 withRenderer:(id)a1;
+ (id)renderRingGroupController:(id)a0 withBackgroundColor:(id)a1 andRenderer:(id)a2;
+ (id)renderRingGroupController:(id)a0 withRenderer:(id)a1;
+ (id)renderRingsUsingRingsView:(id)a0 forMovePercentage:(double)a1 exercisePercentage:(double)a2 standPercentage:(double)a3 withDiameter:(double)a4 thickness:(double)a5 interspacing:(double)a6;
+ (void)renderRingsUsingRingsView:(id)a0 forMovePercentage:(double)a1 exercisePercentage:(double)a2 standPercentage:(double)a3 withDiameter:(double)a4 thickness:(double)a5 interspacing:(double)a6 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7;
+ (id)renderRingsWithBackgroundColor:(id)a0 usingRingsView:(id)a1 forMovePercentage:(double)a2 exercisePercentage:(double)a3 standPercentage:(double)a4 withDiameter:(double)a5 thickness:(double)a6 interspacing:(double)a7;
+ (id)renderSingleRingUsingRingsView:(id)a0 forPercentage:(double)a1 withDiameter:(double)a2 thickness:(double)a3 topColor:(id)a4 bottomColor:(id)a5;

@end
