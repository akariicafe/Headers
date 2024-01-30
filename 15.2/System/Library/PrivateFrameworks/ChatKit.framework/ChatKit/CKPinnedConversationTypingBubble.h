@class CKPinnedConversationTypingBubbleActivityItem, CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, CALayer, CKPinnedConversationActivityItemViewShadowLayer, CAReplicatorLayer;
@protocol CKPinnedConversationActivityItemViewDelegate, CKPinnedConversationActivityItem;

@interface CKPinnedConversationTypingBubble : UIView <CKPinnedConversationActivityItemView>

@property (retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer;
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer;
@property (retain, nonatomic) CALayer *thinkingDotContainer;
@property (retain, nonatomic) CAShapeLayer *thinkingDot;
@property (retain, nonatomic) CAReplicatorLayer *thinkingDots;
@property (readonly, nonatomic) CKPinnedConversationTypingBubbleActivityItem *typingBubbleActivityItem;
@property (nonatomic) long long originationDirection;
@property (nonatomic) struct CGPoint { double x; double y; } originationPoint;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate;
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
- (double)activityItemToContactItemVerticalOverlap;
- (id)initWithActivityItem:(id)a0;
- (double)thinkingDotDiameter;
- (void)_updateThinkingDotColor;
- (double)thinkingDotOpacity;
- (double)thinkingDotSpace;
- (struct CGSize { double x0; double x1; })thinkingDotContainerSize;
- (id)thinkingDotColor;
- (void)calculateBezierPathWithOutputsForPath:(id *)a0 largeBubbleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 mediumBubbleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 smallBubbleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (unsigned long long)tailCornerAnchor;
- (struct CGSize { double x0; double x1; })largeBubbleSize;
- (struct CGSize { double x0; double x1; })mediumBubbleSize;
- (struct CGSize { double x0; double x1; })smallBubbleSize;
- (struct CGPoint { double x0; double x1; })mediumBubbleOffset;
- (struct CGPoint { double x0; double x1; })smallBubbleOffset;
- (double)largeBubbleCornerRadius;

@end
