@class UIImageView, PXFeedSectionInfo, UILabel, UIImage;

@interface PXSharedAlbumHeaderView : UIView

@property (nonatomic) unsigned long long headerImageTag;
@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *chevronView;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isObservingLastExitedForYou;
@property (nonatomic) BOOL useInPopover;
@property (nonatomic) unsigned long long textColorStyle;
@property (nonatomic) unsigned long long tappableArea;
@property (nonatomic) unsigned long long layoutStyle;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;
@property (retain, nonatomic) UIImage *headerImage;

+ (void)preloadResources;

- (void)_updateTitle;
- (void)_updateHeaderImage;
- (void)_updateAvatar:(unsigned long long)a0;
- (void)_updateIsNew;
- (BOOL)_showChevron;
- (id)init;
- (void)_updateSubtitle;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)_showSubtitle;
- (void)_updateBackgroundColor;
- (void)_lastExitedForYouDateDidChange:(id)a0;
- (void)_updateUI;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
