@class UIStackView, GEOExploreGuides, UIImageView, UIView, UIButton;

@interface MKExploreGuidesView : UIView

@property (retain, nonatomic) GEOExploreGuides *exploreGuide;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIStackView *labelsStack;
@property (retain, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) id /* block */ tapHandler;

+ (double)defaultHeight;

- (void)updateUI;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)didSelectExploreGuides:(id)a0;
- (void)setupImage;
- (id)initWithExploreGuides:(id)a0 tapHandler:(id /* block */)a1;
- (void)updateExploreGuide:(id)a0;

@end
