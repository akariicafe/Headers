@class UIStackView, NSString, VUILabel, VUISeparatorView, VUILibraryEpisodeFrameView, VUIMediaItem, VUILegacyDownloadButton, NSObject;
@protocol VUIMediaEntityAssetController;

@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell

@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView;
@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIStackView *episodeInfoStackView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *releaseDateLabel;
@property (retain, nonatomic) VUILabel *durationLabel;
@property (retain, nonatomic) VUILegacyDownloadButton *downloadButton;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) NSObject<VUIMediaEntityAssetController> *assetController;
@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *releaseDate;
@property (copy, nonatomic) NSString *duration;

+ (void)configureVUILibraryEpisodeListCell:(id)a0 withMedia:(id)a1 andAssetController:(id)a2;
+ (id)_metadataLabelWithString:(id)a0 existingLabel:(id)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_addDownloadButtonIfRequired:(id)a0;
- (void)_configureDotSeparator;
- (BOOL)_contentSizeCategoryIsAccessibility;
- (double)_metadataHeightToBaselineNonAXContentSizeCategory;
- (double)_metadataScaledTopMarginForNonAXContentSizeCategory;

@end
