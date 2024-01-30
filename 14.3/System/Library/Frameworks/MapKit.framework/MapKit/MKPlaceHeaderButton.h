@class MKVibrantView, NSString, NSLayoutConstraint, _MKPlaceActionButtonController;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton> {
    unsigned long long _buttonType;
    BOOL _primary;
    NSLayoutConstraint *_heightConstraint;
    MKVibrantView *_vibrantView;
    BOOL _buttonHighlighted;
}

@property (weak, nonatomic) _MKPlaceActionButtonController *buttonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPrimaryType:(unsigned long long)a0;
- (void)applyButtonDefaultConfiguration;
- (void)_setVibrantView;
- (void)_updateStylePrimaryButton;
- (void)_updateStyleNonPrimaryButton;
- (BOOL)_isTintColorWhite;
- (id)_primaryButtonColor;
- (id)_primaryButtonTextColor;
- (void)updateButtonWithHighlighted:(BOOL)a0;
- (void)buttonSelected:(id)a0;
- (void)setPrimaryTitle:(id)a0 subtitle:(id)a1;
- (void)setPrimaryTitle:(id)a0;
- (void)infoCardThemeChanged;
- (void)_contentSizeDidChange;
- (void)setHighlighted:(BOOL)a0;
- (void)placeActionButtonControllerTextDidChange:(id)a0;

@end
