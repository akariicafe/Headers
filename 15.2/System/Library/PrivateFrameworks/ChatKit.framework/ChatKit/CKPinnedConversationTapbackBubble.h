@class CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, CKAcknowledgmentGlyphView, CKPinnedConversationTapbackBubbleActivityItem, CKPinnedConversationActivityItemViewShadowLayer;
@protocol CKPinnedConversationActivityItemViewDelegate, CKPinnedConversationActivityItem;

@interface CKPinnedConversationTapbackBubble : UIView <CKPinnedConversationActivityItemView>

@property (retain, nonatomic) CKAcknowledgmentGlyphView *tapbackGlyph;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer;
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer;
@property (readonly, nonatomic) CKPinnedConversationTapbackBubbleActivityItem *tapbackActivityItem;
@property (nonatomic) long long originationDirection;
@property (nonatomic) struct CGPoint { double x; double y; } originationPoint;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate;
@property (nonatomic) long long acknowledgmentType;
@property (retain, nonatomic) id<CKPinnedConversationActivityItem> activityItem;
@property (nonatomic) long long originationHorizontalDirection;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailAttachmentPoint;
@property (nonatomic) struct CGSize { double width; double height; } parentAvatarViewSize;
@property (readonly, nonatomic) BOOL supportsActivityItemViewContentScale;
@property (nonatomic) long long activityItemViewContentScale;
@property (readonly, nonatomic) BOOL supportsAlignmentWithOriginationSubAvatarFrame;
@property (weak, nonatomic) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateUserInterfaceStyles;
- (void)_updateAcknowledgmentType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tapbackBalloonFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })largeTailBalloonFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })smallTailBalloonFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (char)colorTypeForTapBack:(long long)a0;
- (BOOL)flipVertically;
- (struct CGSize { double x0; double x1; })tapbackBalloonSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)flipHorizontally;
- (struct CGSize { double x0; double x1; })largeTailBalloonSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })smallTailBalloonSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (double)activityItemToContactItemVerticalOverlap;
- (id)initWithActivityItem:(id)a0;

@end
