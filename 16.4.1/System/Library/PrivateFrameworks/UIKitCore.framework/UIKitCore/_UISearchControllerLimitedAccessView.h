@class UIButton, UILabel, UIView;

@interface _UISearchControllerLimitedAccessView : UIView {
    UIView *_backgroundView;
    UILabel *_keyboardLimitedLabel;
}

@property (retain, nonatomic) UIButton *backButton;

- (BOOL)shouldUpdateFocusInContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
