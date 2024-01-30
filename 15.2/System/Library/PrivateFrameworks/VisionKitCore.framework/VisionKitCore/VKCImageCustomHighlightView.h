@class UIColor, NSArray, CAShapeLayer, UIBezierPath, CALayer, NSMutableArray;
@protocol VKCImageCustomHighlightViewDelegate;

@interface VKCImageCustomHighlightView : VKCImageBaseOverlayView

@property (readonly, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) NSArray *selectionRects;
@property (retain, nonatomic) NSArray *matchedRanges;
@property (retain, nonatomic) NSArray *highlightRanges;
@property (retain, nonatomic) CAShapeLayer *highlightLayer;
@property (retain, nonatomic) CALayer *highlightShadowLayer;
@property (retain, nonatomic) CAShapeLayer *highlightColorLayer;
@property (retain, nonatomic) UIBezierPath *normalizedHighlightPath;
@property (retain, nonatomic) UIBezierPath *borderedNormalizedHighlightPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startingHighlightLayerRect;
@property (nonatomic) BOOL isConfiguringHighlights;
@property (retain, nonatomic) NSMutableArray *highlightDots;
@property (weak, nonatomic) id<VKCImageCustomHighlightViewDelegate> highlightViewDelegate;

- (void)layoutSubviews;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)updateHighlightLayerGeometryIfVisible;
- (void)updateHighlightLayerGeometry;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForHighlightLayerInCurrentBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentsRectInLayerCoodinates;
- (void)normalizedVisibleRectDidChange;
- (void)clearHighlightsAnimated:(BOOL)a0 hideLayers:(BOOL)a1;
- (void)performHighlightForRanges:(id)a0 animated:(BOOL)a1 isReplacingResults:(BOOL)a2;
- (void)_configureHighlightDotForRanges:(id)a0;
- (void)clearHighlightsAnimated:(BOOL)a0;
- (void)beginHighlightWithRanges:(id)a0 animated:(BOOL)a1;

@end
