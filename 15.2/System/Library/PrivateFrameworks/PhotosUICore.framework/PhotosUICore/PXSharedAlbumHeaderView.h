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

- (void)_updateBackgroundColor;
- (void)layoutSubviews;
- (void)_updateTitle;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_updateUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateSubtitle;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_lastExitedForYouDateDidChange:(id)a0;
- (BOOL)_showSubtitle;
- (void)_updateHeaderImage;
- (void)_updateAvatar:(unsigned long long)a0;
- (void)_handleHeaderImage:(id)a0 imageTag:(unsigned long long)a1;
- (void)_updateIsNew;
- (BOOL)_showChevron;

@end
