@class UIView;

@interface PREditingReticleView : UIView

@property (retain, nonatomic) UIView *emptyView;
@property (readonly, nonatomic) UIView *outlineBorderView;
@property (nonatomic, getter=isActive) BOOL active;

+ (double)borderColor;
+ (double)maxBorderColor;
+ (double)minBorderColor;
+ (id)reticleVibrancyForVibrancyConfiguration:(id)a0;
+ (double)vibrancyStrength;

- (id)init;
- (void).cxx_destruct;
- (void)_startActiveAnimation;
- (void)_stopActiveAnimation;

@end
