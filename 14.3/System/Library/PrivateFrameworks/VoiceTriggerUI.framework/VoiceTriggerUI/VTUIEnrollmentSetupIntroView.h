@class NSString, UIView, VTUIButton;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentBaseView {
    UIView *_footerView;
}

@property (readonly, nonatomic) VTUIButton *laterButton;
@property (readonly, nonatomic) VTUIButton *continueButton;
@property (readonly, copy, nonatomic) NSString *languageCode;

- (void).cxx_destruct;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupContent;
- (BOOL)showPrivacyTextView;
- (id)_createFooterWithTextFieldShowlaterButton:(BOOL)a0;

@end
