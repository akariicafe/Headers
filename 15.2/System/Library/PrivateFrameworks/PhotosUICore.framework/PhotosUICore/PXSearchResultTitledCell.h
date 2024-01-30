@class NSString, UIImageView, UILabel;

@interface PXSearchResultTitledCell : _UICollectionViewListCell <PXSearchResultThumbnailCell>

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIImageView *thumbnailImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) unsigned long long searchResultType;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseAccessibilityLayout;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_setupImageView;
- (void)setThumbnailImage:(id)a0;
- (id)titleLabelFont;
- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)a0;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_setupSubviews;
- (struct CGSize { double x0; double x1; })thumbnailImageViewPixelSize;
- (id)_setupTitleLabel;
- (id)_setupSubtitleLabel;
- (id)_setupCountLabel;
- (id)italicTitleLabelFont;
- (id)subtitleLabelFont;
- (id)countLabelFont;
- (void)configureWithResult:(id)a0;
- (void)updateContentColors;

@end
