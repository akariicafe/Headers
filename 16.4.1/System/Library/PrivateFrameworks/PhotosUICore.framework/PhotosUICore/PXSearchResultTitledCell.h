@class NSString, UIImageView, UILabel;

@interface PXSearchResultTitledCell : _UICollectionViewListCell <PXSearchResultThumbnailCell>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) NSString *countString;
@property (nonatomic) unsigned long long searchResultType;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConfigurationUsingState:(id)a0;
- (id)_setupImageView;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)titleLabelFont;
- (void)setThumbnailImage:(id)a0;
- (BOOL)shouldUseAccessibilityLayout;
- (id)_setupCountLabel;
- (id)_setupSubtitleLabel;
- (id)_setupTitleLabel;
- (void)configureWithResult:(id)a0;
- (id)countLabelFont;
- (id)italicTitleLabelFont;
- (id)subtitleLabelFont;
- (struct CGSize { double x0; double x1; })thumbnailImageViewPixelSize;
- (void)updateContentColors;
- (void)updateCounts;

@end
