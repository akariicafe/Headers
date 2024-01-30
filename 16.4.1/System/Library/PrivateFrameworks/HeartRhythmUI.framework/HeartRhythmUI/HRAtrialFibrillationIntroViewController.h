@class UIScrollView, UILabel, UIView;

@interface HRAtrialFibrillationIntroViewController : HKViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIView *learnMoreContentView;

- (id)_titleFont;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_bodyFont;
- (id)_titleFontTextStyle;
- (void)setUpConstraints;
- (double)_titleTopToFirstBaselineLeading;
- (void)setUpUI;
- (id)_createHeroView;
- (double)_assetImageBottomToTitleFirstBaseline;
- (id)_bodyFontTextStyle;
- (double)_bodyLastBaselineToContentBottom;
- (double)_titleLastBaselineToBodyFirstBaseline;

@end
