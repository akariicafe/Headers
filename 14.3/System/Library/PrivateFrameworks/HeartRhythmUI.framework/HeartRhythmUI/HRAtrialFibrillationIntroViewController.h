@class UIScrollView, UILabel, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIView *learnMoreContentView;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)viewDidLoad;
- (id)_bodyFontTextStyle;
- (double)_titleTopToFirstBaselineLeading;
- (id)_createHeroView;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_bodyLastBaselineToContentBottom;

@end
