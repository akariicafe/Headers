@class NSString, UILabel, UIView, UIButton;

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate> {
    BOOL _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIView *_waveTapEndpointButtonView;
    BOOL _blackTextColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRenderConfig:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)isShowing;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyboardButtonPressed:(id)a0;
- (void)updateLanguageLabel;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (id)darkGrayColor;
- (void).cxx_destruct;
- (void)setState:(int)a0;

@end
