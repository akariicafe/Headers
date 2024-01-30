@class NSArray, NSString, UIView, UIButton;
@protocol VTUITurnOnSiriViewDelegate;

@interface VTUITurnOnSiriView : VTUIEnrollmentBaseView <UITextViewDelegate> {
    NSArray *_siriLanguages;
    UIView *_footerView;
}

@property (weak, nonatomic) id<VTUITurnOnSiriViewDelegate> stateViewDelegate;
@property (readonly, nonatomic) UIButton *laterButton;
@property (readonly, nonatomic) UIButton *continueButton;
@property (readonly, nonatomic) NSArray *continueButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)footerView;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)prepareForLastTimeShown;
- (id)languageSelectionOfContinueButton:(id)a0;
- (void)_setupContent;
- (BOOL)showPrivacyTextView;
- (void)_setupTurnOnSiriUI;

@end
