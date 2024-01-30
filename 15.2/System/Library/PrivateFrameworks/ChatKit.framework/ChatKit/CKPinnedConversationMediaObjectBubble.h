@class UIImageView, CKPinnedConversationMediaObjectActivityItem, NSLayoutConstraint;

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {
    double _pillCornerRadius;
    long long _activityItemViewContentScale;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint;
@property (readonly, nonatomic) CKPinnedConversationMediaObjectActivityItem *mediaObjectActivityItem;

- (id)_previewImage;
- (BOOL)isSticker;
- (void)contentSizeCategoryDidChange:(id)a0;
- (double)pillCornerRadius;
- (void)_updateMediaObjectPreview;
- (struct CGSize { double x0; double x1; })_imageViewSize;
- (void).cxx_destruct;
- (void)_updatePillCornerRadius;
- (BOOL)isAnimojiVideo;
- (long long)contentViewContentMode;
- (void)_updateImageViewSizeConstraints;
- (id)initWithMediaObjectActivityItem:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (void)setActivityItem:(id)a0;
- (void)setParentAvatarViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)supportsActivityItemViewContentScale;
- (long long)activityItemViewContentScale;
- (void)setActivityItemViewContentScale:(long long)a0;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
