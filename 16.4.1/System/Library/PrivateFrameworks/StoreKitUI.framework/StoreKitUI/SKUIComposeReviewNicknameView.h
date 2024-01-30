@class SKUIComposeReviewSampleCardView, UITextField, SKUIGradientView, UILabel, UIView;

@interface SKUIComposeReviewNicknameView : UIView

@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *nicknamePlaceholderLabel;
@property (retain, nonatomic) SKUIComposeReviewSampleCardView *sampleCardView;
@property (retain, nonatomic) SKUIGradientView *sampleCardGradientView;
@property (retain, nonatomic) UIView *nicknameBackgroundView;
@property (retain, nonatomic) UITextField *nicknameTextfield;
@property (retain, nonatomic) UILabel *nicknameInfoLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setupView;
- (void)_setupInfo;
- (void)_setupTextField;
- (void)_setupSampleCardView;
- (void)_setupTitle;

@end
