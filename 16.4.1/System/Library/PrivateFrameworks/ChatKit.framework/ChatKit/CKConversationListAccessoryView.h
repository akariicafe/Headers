@class UIImageSymbolConfiguration, NSDictionary, UIVisualEffectView, UIView, UIImageView, NSNumber;

@interface CKConversationListAccessoryView : UIControl

@property (retain, nonatomic) NSDictionary *configStateMap;
@property (nonatomic) BOOL needsVisualEffects;
@property (nonatomic) BOOL needsVibrancy;
@property (retain, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIVisualEffectView *backgroundView;
@property (retain, nonatomic) UIVisualEffectView *vibrancyView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSNumber *lastKnownState;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) BOOL imageNeedsEdgeAntiAliasing;

+ (double)defaultDiameter;
+ (id)defaultStateConfigMap;

- (void)setSelected:(BOOL)a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0 forState:(unsigned long long)a1;
- (id)configForState:(unsigned long long)a0;
- (void)_setNeedsVisualAppearanceUpdate;
- (void)_setConfig:(id)a0 forState:(unsigned long long)a1;
- (void)_updateVisualAppearanceForCurrentStateIfNeeded;
- (id)initWithDiameter:(double)a0;
- (void)setBlurEffect:(id)a0 forState:(unsigned long long)a1;
- (void)setBlurEffect:(id)a0 withVibrancyEffectStyle:(long long)a1 forState:(unsigned long long)a2;
- (void)setTintColor:(id)a0 forState:(unsigned long long)a1;
- (void)setVibrancyEffectStyle:(long long)a0 forState:(unsigned long long)a1;

@end
