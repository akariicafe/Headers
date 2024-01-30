@class UIFont, VUILibraryEpisodeFrameView, VUILabel, VUIMediaTagsView, VUIFocusableTextView, VUIMediaItem, NSString;
@protocol VUIEpisodeDetailViewDelegate;

@interface VUIEpisodeDetailView : UIScrollView <VUILibraryEpisodeFrameViewDelegate>

@property (retain, nonatomic) VUILibraryEpisodeFrameView *imageFrameView;
@property (retain, nonatomic) VUILabel *episodeTitleLabel;
@property (retain, nonatomic) VUILabel *seasonNumberLabel;
@property (retain, nonatomic) VUILabel *episodeNumberLabel;
@property (retain, nonatomic) VUILabel *releaseDateLabel;
@property (retain, nonatomic) VUILabel *dotSeparatorLabel;
@property (retain, nonatomic) VUIFocusableTextView *contentDescriptionView;
@property (retain, nonatomic) UIFont *contentDescriptionFont;
@property (retain, nonatomic) VUIMediaItem *mediaItem;
@property (retain, nonatomic) VUIMediaTagsView *mediaBadgeTagsView;
@property (weak, nonatomic) id<VUIEpisodeDetailViewDelegate> episodeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })_episodeFrameImageSizeForDetailView:(id)a0 withViewSize:(struct CGSize { double x0; double x1; })a1;
+ (void)configureEpisodeDetailView:(id)a0 withMedia:(id)a1 viewSize:(struct CGSize { double x0; double x1; })a2;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_configureDotSeparator;
- (void)_configureViewElementsForAX;
- (double)_descriptionBottomMarginWithBaselineMargin:(double)a0;
- (double)_descriptionTopMarginWithBaselineMargin:(double)a0 otherFont:(id)a1;
- (double)_seasonMargin;
- (void)didTapButtonForEpisodeFrameView:(id)a0;

@end
