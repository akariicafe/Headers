@class NSString, UIImage, UIView, NSMutableArray, UIButton;

@interface UIDictationPopoverView : UIDictationView <UIPointerInteractionDelegate> {
    UIButton *_languageButton;
    UIButton *_cancelButton;
    UIButton *_centerButton;
    UIButton *_startButton;
    UIButton *_stopButton;
    UIButton *_keyboardButton;
    UIImage *_showKeyboardButtonImage;
    UIImage *_hideKeyboardButtonImage;
    UIImage *_stopDictationImage;
    unsigned long long _popoverPage;
    NSMutableArray *_languageButtons;
    UIView *_languageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })viewSize;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyboardButtonPressed:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (void).cxx_destruct;
- (void)setState:(int)a0;
- (id)buttonImageNamed:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)centerButtonPressed:(id)a0;
- (void)clearLanguageButtons;
- (void)languageButtonPressed:(id)a0 withEvent:(id)a1;
- (id)languageButtons:(BOOL)a0;
- (void)startButtonPressed:(id)a0;
- (void)stopButtonPressed:(id)a0;

@end
