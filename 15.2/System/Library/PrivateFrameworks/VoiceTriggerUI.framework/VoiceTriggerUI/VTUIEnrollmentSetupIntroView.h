@class NSString, UIView, VTUIButton;

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentBaseView {
    UIView *_footerView;
}

@property (readonly, nonatomic) VTUIButton *laterButton;
@property (readonly, nonatomic) VTUIButton *continueButton;
@property (readonly, copy, nonatomic) NSString *languageCode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)footerView;
- (void).cxx_destruct;
- (void)_setupContent;
- (BOOL)showPrivacyTextView;
- (id)_createFooterWithTextFieldShowlaterButton:(BOOL)a0;

@end
