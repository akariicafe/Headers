@class BSUIVibrancyBackdropView, BSUIVibrancyEffectValues, UIView;

@interface BSUIVibrancyEffectView : BSUIVibrancyView {
    struct { BOOL subviews; } _needsUpdate;
    BSUIVibrancyEffectValues *_values;
}

@property (readonly, nonatomic) BSUIVibrancyBackdropView *materialBackdropView;
@property (readonly, nonatomic) UIView *maskView;
@property (readonly, nonatomic) UIView *vibrancyView;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic, getter=isCaptureOnly) BOOL captureOnly;
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long contentType;

- (void)_updateSubviews;
- (void)updateFilters;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)invalidateSubviews;
- (void)_updateSubviewsIfNeeded;
- (void).cxx_destruct;

@end
