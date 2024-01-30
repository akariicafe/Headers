@class UIStackView, GEOExploreGuides, UIImageView, UIFont, UIView, UILabel, UIButton;

@interface MKExploreGuidesView : UIView

@property (retain, nonatomic) GEOExploreGuides *exploreGuide;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIStackView *labelsStack;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIFont *defaultTitleFont;
@property (retain, nonatomic) UIFont *maxSupportedTitleFont;
@property (copy, nonatomic) id /* block */ tapHandler;

+ (double)defaultHeight;

- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)didSelectExploreGuides:(id)a0;
- (id)initWithExploreGuides:(id)a0 tapHandler:(id /* block */)a1;
- (void)setupImage;
- (void)updateExploreGuide:(id)a0;
- (void)updateUI;

@end
