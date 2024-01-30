@class UIView, NSString, UIImage, NSArray, UIImageView, _UIClickInteraction, UIVisualEffectView, UIColor;

@interface UICoverSheetButton : UIControl <_UIClickInteractionDelegateInternal> {
    UIView *_containerView;
    UIImageView *_contentView;
    UIVisualEffectView *_backgroundEffectView;
    NSArray *_backgroundEffects;
    NSArray *_selectedBackgroundEffects;
    UIView *_backgroundHighlightView;
    _UIClickInteraction *_clickInteraction;
    BOOL _interactive;
    BOOL _didActivateDuringInteraction;
    double _maxForceDuringInteraction;
    double _highlightProgress;
}

@property (nonatomic, getter=isPronounced) BOOL pronounced;
@property (nonatomic, getter=isLatching) BOOL latching;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *selectedImage;
@property (retain, nonatomic) UIColor *selectedTintColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (copy, nonatomic) NSString *localizedAccessoryTitle;
@property (copy, nonatomic) NSString *backgroundEffectViewGroupName;
@property (copy, nonatomic) NSString *statisticsIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)layoutIfNeededAnimated;
- (id)_interactionDurationStat;
- (id)_firstActivationDurationStat;
- (id)_backgroundEffectsWithBrightness:(double)a0;
- (void)clickInteraction:(id)a0 didObserveForce:(double)a1;
- (void)_animateEffectUpdateWithProgress:(double)a0 ended:(BOOL)a1;
- (id)_interactionCountStatWithActivation:(BOOL)a0;
- (id)_maxForceStatWithActivation:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_clickInteractionDefaultDriverType:(id)a0;
- (void)clickInteractionDidClickUp:(id)a0;
- (BOOL)clickInteractionShouldBegin:(id)a0;
- (void)clickInteractionDidEnd:(id)a0;
- (id)highlightEffectForClickInteraction:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
