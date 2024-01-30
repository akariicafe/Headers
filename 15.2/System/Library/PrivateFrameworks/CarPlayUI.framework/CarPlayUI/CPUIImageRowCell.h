@class UIStackView, CPUIHighlightButton, NSArray, UIImage, UIImageView, NSMutableArray, NSLayoutConstraint, UIActivityIndicatorView;

@interface CPUIImageRowCell : _CPUIBaseTableCell

@property (retain, nonatomic) NSMutableArray *reusableMediaViews;
@property (copy, nonatomic) NSArray *artworkCatalogs;
@property (retain, nonatomic) CPUIHighlightButton *focusIndicator;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UIImage *fallbackImage;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (copy, nonatomic) id /* block */ selectGridItemBlock;
@property (copy, nonatomic) id /* block */ selectTitleBlock;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint;

+ (double)rowHeight;
+ (double)minimumHeight;

- (void)setLoading:(BOOL)a0;
- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)applyConfiguration:(id)a0;
- (void)_updateTintColors;
- (void)configureCell;
- (void)coreCellItemTapped:(id)a0;
- (void)_layoutArtworkImages;
- (long long)artworkViewCountThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)gridCellItemTapped:(id)a0;

@end
