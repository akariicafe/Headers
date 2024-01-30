@class NSArray, NSMutableArray, UIView;

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentBaseView {
    UIView *_footerView;
    NSArray *_continueButtonsLanguages;
}

@property (readonly, nonatomic) NSMutableArray *continueButtons;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)footerView;
- (void).cxx_destruct;
- (id)languageSelectionOfContinueButton:(id)a0;
- (void)_setupContent;
- (void)setContinueButtonLanguages:(id)a0;
- (BOOL)showPrivacyTextView;
- (void)_addContinueButtonsToFooter;

@end
