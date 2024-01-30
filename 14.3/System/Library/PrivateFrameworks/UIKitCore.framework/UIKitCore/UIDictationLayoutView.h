@class NSString, UIButton, UILabel;

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate> {
    BOOL _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIButton *_waveTapEndpointButton;
    BOOL _blackTextColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setRenderConfig:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)dealloc;
- (BOOL)isShowing;
- (id)darkGrayColor;
- (void)finishReturnToKeyboard;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)keyboardButtonPressed:(id)a0;
- (void)globeButtonPressed:(id)a0 withEvent:(id)a1;
- (void)updateLanguageLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(int)a0;
- (void)returnToKeyboard;

@end
