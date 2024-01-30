@class VKQuad, NSString, NSArray, UITapGestureRecognizer, CAShapeLayer, NSDictionary, VKCMRCDataDetectorElement, UIBezierPath, VKCBaseDataDetectorElement, UIContextMenuInteraction;
@protocol VKCDataDetectorElementViewDelegate;

@interface VKCDataDetectorElementView : VKPlatformView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, BCSActionDelegate>

@property (retain, nonatomic) CAShapeLayer *highlightPathLayer;
@property (retain, nonatomic) UIBezierPath *highlightPath;
@property (readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property (readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
@property (readonly, nonatomic) double lineWithForAverageSubquadHeight;
@property (readonly, nonatomic) BOOL shouldUseBCSAction;
@property (readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property (nonatomic) BOOL isPeformingManualContextInvocation;
@property (nonatomic) BOOL allowLongPressDDActivationOnly;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (retain, nonatomic) NSDictionary *dataDetectorContext;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<VKCDataDetectorElementViewDelegate> delegate;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier;
@property (readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement;
@property (readonly, nonatomic) NSArray *allDataDetectorElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contextMenuInteraction:(id)a0 previewForDismissingMenuWithConfiguration:(id)a1;
- (void)layoutSubviews;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)didTap:(id)a0;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)updateHighlightPath;
- (id)calcPathForUnderline;
- (BOOL)isPointInQuad:(struct CGPoint { double x0; double x1; })a0;
- (void)sendAnalyticsEventIfNecessaryForDDType:(long long)a0;
- (id)analyticsEventWithDDType:(long long)a0;
- (id)presentingViewControllerForInteraction;
- (id)initWithDataDetectorElement:(id)a0 unfilteredElements:(id)a1;
- (void)manuallyActivateLongPressMenuInteraction;

@end
