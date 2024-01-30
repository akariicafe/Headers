@class UIButton, UIImageView, UILabel, UIView, UIViewController;

@interface SBModalWidgetIntroductionBackgroundDescriptionView : UIView

@property (weak, nonatomic) UIViewController *owner;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introductionTextLabel;
@property (retain, nonatomic) UIImageView *homescreenPreview;
@property (retain, nonatomic) UIButton *continueButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withOwner:(id)a1;

@end
