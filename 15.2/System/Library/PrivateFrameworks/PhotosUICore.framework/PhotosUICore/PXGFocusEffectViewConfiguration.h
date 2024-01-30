@interface PXGFocusEffectViewConfiguration : PXGFocusableViewConfiguration

@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGPoint { double x; double y; } contentMotionRotation;
@property (nonatomic) struct CGPoint { double x; double y; } contentMotionTranslation;
@property (nonatomic) double focusedSizeIncrease;

- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
