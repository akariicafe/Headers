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
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)a0;
- (void)_updateTintColors;
- (void)_layoutArtworkImages;
- (void)_removeArtworkButton:(id)a0;
- (long long)artworkViewCountThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureCell;
- (void)coreCellItemTapped:(id)a0;
- (void)gridCellItemTapped:(id)a0;

@end
