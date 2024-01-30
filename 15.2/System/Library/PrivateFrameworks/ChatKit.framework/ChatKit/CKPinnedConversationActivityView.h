@class NSArray, CAShapeLayer, CKPinnedConversationActivitySnapshot, NSString, NSMutableArray;

@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate>

@property (retain, nonatomic) NSMutableArray *activityItemViews;
@property (retain, nonatomic) NSMutableArray *contactItemViews;
@property (retain, nonatomic) CKPinnedConversationActivitySnapshot *latestSnapshot;
@property (retain, nonatomic) CAShapeLayer *innerContentAlignmentDebugLayer;
@property (retain, nonatomic) CAShapeLayer *outerContentAlignmentDebugLayer;
@property (retain, nonatomic) CAShapeLayer *activityItemAttachmentCircleDebugLayer;
@property (retain, nonatomic) CAShapeLayer *originationPointDebugLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } avatarFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } innerContentAlignmentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outerContentAlignmentFrame;
@property (nonatomic) long long activityItemOriginationDirection;
@property (nonatomic) struct CGPoint { double x; double y; } activityItemOriginationPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activityItemOriginationSubAvatarFrame;
@property (nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity;
@property (nonatomic) BOOL showContentAlignmentDebugFrames;
@property (readonly, nonatomic) NSArray *displayedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_layoutViewsAssociatedWithActivityItemViews:(id)a0 excludingContactItemViews:(id)a1 withContentScale:(id)a2 applyingTransform:(BOOL)a3 updatingActivityItemViews:(BOOL)a4 updatingAttachedContactItemViews:(BOOL)a5;
- (void)layoutSubviews;
- (long long)activityViewContentAlignmentForContactItemAlignment:(long long)a0;
- (double)contactItemViewCenterXCoordinateForYCoordinate:(double)a0 avatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentAlignment:(long long)a2;
- (void)resetToEmptySnapshot;
- (double)tailAttachmentXCoordinateForYCoordinate:(double)a0 avatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentAlignment:(long long)a2;
- (struct CGPoint { double x0; double x1; })pointAlongCircle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atArcLength:(double)a1 fromPoint:(struct CGPoint { double x0; double x1; })a2 clockwise:(BOOL)a3;
- (struct CGPoint { double x0; double x1; })_convertPointInOwnCoordinateSpace:(struct CGPoint { double x0; double x1; })a0 toUnscaledCoordinateSpaceOfSubview:(id)a1;
- (void)activityItemViewNeedsResize:(id)a0;
- (BOOL)nextContactItemIsClockwiseForOriginationDirection:(long long)a0 contactItemAlignment:(long long)a1;
- (void)setSuppressingActivity:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (double)circleXCoordinateForYCoordinate:(double)a0 radius:(double)a1 centerPoint:(struct CGPoint { double x0; double x1; })a2 contentAlignment:(long long)a3;
- (void)applySnapshot:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_unattachedContactItemViews;
- (void)_layoutUnattachedContactItemViews:(id)a0 withContentScale:(id)a1 applyingTransform:(BOOL)a2;
- (double)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateSnapshotAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_presentedActivityItems;
- (id)contactItemViewMatchingContactItemIdentifier:(id)a0 fromContactItemViews:(id)a1;
- (id)_activityItemViewWithActivityItemIdentifier:(id)a0;
- (BOOL)haveAttachedContactItemViewsForActivityViews:(id)a0;
- (double)contactItemViewDiameterForAvatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
