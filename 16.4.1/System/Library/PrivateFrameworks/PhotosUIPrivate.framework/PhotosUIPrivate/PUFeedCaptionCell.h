@class PXUIButton, UIImage, UILabel, PXFeedSectionInfo;

@interface PUFeedCaptionCell : PUFeedCell

@property (readonly, nonatomic) UIImage *likedImage;
@property (readonly, nonatomic) UIImage *notLikedImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) PXUIButton *likeButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;
@property (nonatomic) unsigned long long captionItemIndex;
@property (nonatomic) BOOL hideCaption;
@property (nonatomic) BOOL isLiked;

- (BOOL)isLiked;
- (void)_updateTitle;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSubtitle;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateUI;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_handleLikeButtonTap:(id)a0;
- (void)_setLikeButtonLiked:(BOOL)a0;
- (BOOL)_shouldHideLikeButton;
- (void)_updateLikeButton;

@end
