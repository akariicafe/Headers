@class VUIDownloadEntity, NSString, VUISeparatorView, VUILabel, VUILibraryEpisodeFrameView, VUILegacyDownloadButton, _TVImageView, VUIVideosImageView;
@protocol VUIDownloadEntityTableViewCellDelegate;

@interface VUIDownloadEntityTableViewCell : UITableViewCell <VUIRentalExpirationLabelDelegate, VUIDownloadEntityDelegate>

@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) _TVImageView *posterImageView;
@property (retain, nonatomic) VUILabel *metaDataHeaderFirstLabel;
@property (retain, nonatomic) VUILabel *metaDataHeaderSecondLabel;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) VUIVideosImageView *rightImageView;
@property (retain, nonatomic) VUILibraryEpisodeFrameView *episodeImageView;
@property (retain, nonatomic) VUIDownloadEntity *downloadEntity;
@property (nonatomic) unsigned long long previousDownloadState;
@property (weak, nonatomic) id<VUIDownloadEntityTableViewCellDelegate> delegate;
@property (retain, nonatomic) VUILegacyDownloadButton *downloadButton;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureVUIDownloadEntityTableViewCell:(id)a0 withDownloadEntity:(id)a1 forMetrics:(BOOL)a2;
+ (id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)a0;
+ (id)_entityPlaceholderImageForDownloadEntity:(id)a0;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)willTransitionToState:(unsigned long long)a0;
- (void)rentalExpirationLabelNeedsRelayout:(id)a0;
- (void)_addDownloadButtonIfRequired:(id)a0;
- (double)_imageHeightForCurrentSizeClass;
- (id)_episodePlaceholderImage;
- (void)_addMetaDataLabelsIfRequired:(id)a0;
- (void)_removeDownloadButtonIfRequired;
- (struct CGSize { double x0; double x1; })_layoutWithSize:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (void)_configureViewElementsForAX;
- (struct CGSize { double x0; double x1; })_layoutForCategoryAccessibility:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (struct CGSize { double x0; double x1; })_layoutForCompact:(struct CGSize { double x0; double x1; })a0 metricsOnly:(BOOL)a1;
- (double)_verticalPaddingForCurrentSizeClass;
- (void)downloadEntity:(id)a0 numberOfItemsDidChange:(unsigned long long)a1;
- (void)downloadEntity:(id)a0 numberOfItemsDownloadingDidChange:(id)a1;

@end
