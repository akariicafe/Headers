@class UIScrollView, UILabel, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIView *learnMoreContentView;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)setUpUI;
- (void).cxx_destruct;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (double)_titleTopToFirstBaselineLeading;
- (id)_bodyFontTextStyle;
- (id)_createHeroView;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_bodyLastBaselineToContentBottom;

@end
