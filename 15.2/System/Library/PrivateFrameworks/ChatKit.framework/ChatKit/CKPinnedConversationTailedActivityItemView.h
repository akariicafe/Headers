@class CKPinnedConversationActivityItemViewBackdropLayer, CAShapeLayer, UIView, CKPinnedConversationActivityItemViewShadowLayer;
@protocol CKPinnedConversationActivityItemViewDelegate, CKPinnedConversationActivityItem;

@interface CKPinnedConversationTailedActivityItemView : UIView <CKPinnedConversationActivityItemView>

@property (retain, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer;
@property (retain, nonatomic) CAShapeLayer *backdropMaskShapeLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer;
@property (retain, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer;
@property (retain, nonatomic) CAShapeLayer *contentViewStrokeLayer;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) double pillCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentViewPadding;
@property (readonly, nonatomic) double contentViewHorizontalInsetForPillCornerRadius;
@property (readonly, nonatomic) long long contentViewContentMode;
@property (retain, nonatomic) id<CKPinnedConversationActivityItem> activityItem;
@property (nonatomic) long long originationDirection;
@property (nonatomic) long long originationHorizontalDirection;
@property (nonatomic) struct CGPoint { double x; double y; } originationPoint;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } tailAttachmentPoint;
@property (nonatomic) struct CGSize { double width; double height; } parentAvatarViewSize;
@property (readonly, nonatomic) BOOL supportsActivityItemViewContentScale;
@property (nonatomic) long long activityItemViewContentScale;
@property (readonly, nonatomic) BOOL supportsAlignmentWithOriginationSubAvatarFrame;
@property (weak, nonatomic) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate;

- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pillRect;
- (double)balloonTailWidth;
- (struct CGPoint { double x0; double x1; })tailAttachmentPointWithOutputForMinimumContinousAnchorX:(double *)a0 maximumContinuousAnchorX:(double *)a1;
- (double)balloonTailHeight;
- (double)balloonCornerRadius;
- (id)_pathForTailedBalloonSegmentWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 anchorPoint:(struct CGPoint { double x0; double x1; })a2 originationHorizontalDirection:(long long)a3 originationDirection:(long long)a4;
- (double)balloonTailRadius;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithActivityItem:(id)a0 contentView:(id)a1 needsContentViewStroke:(BOOL)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateUserInterfaceStyles;
- (double)activityItemToContactItemVerticalOverlap;

@end
