@class UIView, VTUIButton;

@interface VTUIEnrollmentSuccessView : VTUIEnrollmentBaseView {
    UIView *_footerView;
}

@property (readonly, nonatomic) VTUIButton *finishButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)footerView;
- (void).cxx_destruct;
- (id)_createFooter;
- (void)_setupContent;
- (BOOL)showPrivacyTextView;

@end
