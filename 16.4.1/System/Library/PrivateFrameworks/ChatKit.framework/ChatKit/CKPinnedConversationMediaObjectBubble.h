@class UIImageView, CKPinnedConversationMediaObjectActivityItem, NSLayoutConstraint;

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {
    double _pillCornerRadius;
    long long _activityItemViewContentScale;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint;
@property (readonly, nonatomic) CKPinnedConversationMediaObjectActivityItem *mediaObjectActivityItem;

- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (double)pillCornerRadius;
- (void)_updateImageViewSizeConstraints;
- (struct CGSize { double x0; double x1; })_imageViewSize;
- (id)_previewImage;
- (void)_updateMediaObjectPreview;
- (void)_updatePillCornerRadius;
- (long long)activityItemViewContentScale;
- (long long)contentViewContentMode;
- (double)contentViewHorizontalInsetForPillCornerRadius;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewPadding;
- (id)initWithMediaObjectActivityItem:(id)a0;
- (BOOL)isAnimojiVideo;
- (BOOL)isSticker;
- (void)setActivityItem:(id)a0;
- (void)setActivityItemViewContentScale:(long long)a0;
- (void)setParentAvatarViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)supportsActivityItemViewContentScale;
- (BOOL)supportsAlignmentWithOriginationSubAvatarFrame;

@end
