@class UIImageView, CKPinnedConversationMediaObjectActivityItem, NSLayoutConstraint;

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {
    double _pillCornerRadius;
    long long _activityItemViewContentScale;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint;
@property (readonly, nonatomic) CKPinnedConversationMediaObjectActivityItem *mediaObjectActivityItem;

- (void).cxx_destruct;
- (BOOL)isSticker;
- (void)setActivityItem:(id)a0;
- (void)setParentAvatarViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)supportsActivityItemViewContentScale;
- (long long)activityItemViewContentScale;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
- (struct CGSize { double x0; double x1; })_imageViewSize;
- (void)_updateMediaObjectPreview;
- (void)_updatePillCornerRadius;
- (long long)contentViewContentMode;
- (void)_updateImageViewSizeConstraints;
- (BOOL)isAnimojiVideo;
- (id)initWithMediaObjectActivityItem:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (id)_previewImage;
- (void)contentSizeCategoryDidChange:(id)a0;
- (double)pillCornerRadius;

@end
