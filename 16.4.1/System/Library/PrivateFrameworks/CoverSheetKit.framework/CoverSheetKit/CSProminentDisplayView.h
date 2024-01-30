@class UIView, CSProminentTextElementView, CSProminentLayoutController, BSUIVibrancyShadowView, BSUIVibrancyEffectView, CSProminentTimeView, NSMutableArray, CSProminentEmptyElementView;

@interface CSProminentDisplayView : UIView

@property (readonly, nonatomic) CSProminentLayoutController *layoutController;
@property (nonatomic) BOOL animatingTransientSubtitleTransition;
@property (nonatomic) BOOL animatingTransientSubtitleTransitionToTransient;
@property (retain, nonatomic) NSMutableArray *pendedTransientSubtitleViews;
@property (nonatomic) BOOL hasClearedSinceLastAddedTransient;
@property (readonly, nonatomic) BSUIVibrancyEffectView *vibrancyEffectView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) BSUIVibrancyShadowView *vibrancyShadowView;
@property (retain, nonatomic) CSProminentTimeView *timeView;
@property (retain, nonatomic) CSProminentTextElementView *subtitleView;
@property (retain, nonatomic) CSProminentEmptyElementView *subtitleComplicationView;
@property (retain, nonatomic) CSProminentEmptyElementView *complicationRowView;
@property (retain, nonatomic) CSProminentTextElementView *transientSubtitleView;
@property (retain, nonatomic) CSProminentTextElementView *customSubtitleView;
@property (nonatomic) double subtitleAlpha;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;

- (id)_contentView;
- (void)setDisplayDate:(id)a0;
- (void)_updateVisibilityForNonTransientSubtitleViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_showTransientSubtitleView:(id)a0 withDelay:(double)a1;
- (id)_complicationsSuperview;
- (void)layoutSubviews;
- (void)_applyAlphaToNonTransientSubtitleViews:(double)a0;
- (void)_transitionToNextPendedSubtitleIfNecessary;
- (void)_showTransientSubtitleView:(id)a0;
- (void)_addComplicationSubview:(id)a0;
- (void)_updateAlphaForNonTransientSubtitleViews;
- (void).cxx_destruct;
- (void)_transitionToNextPendedSubtitleIfNecessaryWithDelay:(double)a0;

@end
