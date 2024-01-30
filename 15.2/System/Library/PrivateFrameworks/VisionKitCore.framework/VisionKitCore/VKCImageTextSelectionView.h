@class NSString, NSArray, CAShapeLayer, UIBezierPath, CALayer, NSObject, VKTextRange;
@protocol OS_dispatch_queue, VKCImageTextSelectionViewDelegate;

@interface VKCImageTextSelectionView : VKCImageBaseOverlayView

@property (retain, nonatomic) NSArray *allLineQuads;
@property (retain, nonatomic) CAShapeLayer *highlightLayer;
@property (retain, nonatomic) CALayer *highlightShadowLayer;
@property (retain, nonatomic) UIBezierPath *normalizedHighlightPath;
@property (retain, nonatomic) UIBezierPath *borderedNormalizedHighlightPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightLayerStartContentsRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentContentsRectInLayerCoodinates;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (weak, nonatomic) id<VKCImageTextSelectionViewDelegate> textSelectionDelegate;
@property (retain, nonatomic) VKTextRange *documentRange;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *selectedText;
@property (retain, nonatomic) VKTextRange *selectedRange;
@property (nonatomic) BOOL highlightSelectableItems;
@property (nonatomic) BOOL longPressDataDetectorsInTextMode;

- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)selectionRectsForRange:(id)a0;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (id)positionWithinRange:(id)a0 farthestInDirection:(unsigned long long)a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)positionFromPosition:(id)a0 inDirection:(unsigned long long)a1 offset:(long long)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)textInRange:(id)a0;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setRecognitionResult:(id)a0;
- (id)quadsForAllWordsForCurrentLayout;
- (void)performHighlightSelectableTextAnimated:(BOOL)a0;
- (void)setHighlightSelectableItems:(BOOL)a0 animated:(BOOL)a1;
- (void)updateHighlightLayerGeometryIfVisible;
- (void)updateHighlightLayerGeometry;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForHighlightLayerInCurrentBounds;
- (id)boundedPositionFromPosition:(id)a0;
- (id)closestBlockOfType:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 maxDistance:(double)a2;
- (void)updateHighlightLayerContentIfVisible;
- (id)closestQuadForBlockOfType:(unsigned long long)a0 toPoint:(struct CGPoint { double x0; double x1; })a1 maxDistance:(double)a2;
- (void)updateSelectionRectsForBoundsChange;
- (BOOL)containsTextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)containsSelectedTextAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)imageContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)sendAnalyticsEventWithSelector:(SEL)a0 type:(long long)a1 source:(long long)a2;

@end
