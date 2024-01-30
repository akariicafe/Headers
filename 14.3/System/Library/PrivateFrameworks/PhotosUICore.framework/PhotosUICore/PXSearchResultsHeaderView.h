@class NSString, NSArray, UILabel, UIButton;

@interface PXSearchResultsHeaderView : UICollectionReusableView

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *seeAllButton;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) id /* block */ seeAllButtonHandler;
@property (retain, nonatomic) NSArray *smallAndMediumTextSizeConstraints;
@property (retain, nonatomic) NSArray *largeTextSizeConstraints;
@property (nonatomic) BOOL largeTextSizeConstraintsAreActive;

+ (double)headerViewHeight;

- (void)setTitleLabelString:(id)a0;
- (void)setSeeAllButtonTitle:(id)a0;
- (void)setSeeAllButtonHidden:(BOOL)a0;
- (void)setSectionIdentifier:(id)a0 seeAllButtonHandler:(id /* block */)a1;
- (void)_didSelectSeeAllButton:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setupConstraintsForTextSize;
- (void)setupLargeTextConstaints;
- (void)setupSmallAndMediumTextConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
