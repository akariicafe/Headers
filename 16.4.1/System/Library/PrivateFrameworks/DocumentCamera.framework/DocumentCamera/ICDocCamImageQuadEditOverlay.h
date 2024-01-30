@class ICDocCamImageQuad, NSString, NSArray, UIImage, CALayer, CAShapeLayer, ICDocCamImageQuadEditPanGestureRecognizer, NSMutableArray, UIBezierPath, UIColor;
@protocol ICDocCamImageQuadEditOverlayDelegate;

@interface ICDocCamImageQuadEditOverlay : UIView <ICDocCamImageQuadEditPanGestureRecognizerDelegate>

@property (retain, nonatomic) NSArray *knobs;
@property (copy, nonatomic) NSArray *knobAccessibilityElements;
@property (readonly, nonatomic) UIColor *validRectColor;
@property (readonly, nonatomic) UIColor *invalidRectColor;
@property (nonatomic) BOOL isDisplayingValidQuad;
@property (retain, nonatomic) CALayer *selectedKnob;
@property (retain, nonatomic) ICDocCamImageQuadEditPanGestureRecognizer *panGR;
@property (retain, nonatomic) CALayer *knobLayer;
@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (readonly, nonatomic) UIBezierPath *outlinePath;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) CALayer *loupeLayer;
@property (retain, nonatomic) CALayer *loupeContentsLayer;
@property (nonatomic) double tempOverlayMagnification;
@property (nonatomic) double knobHeight;
@property (retain, nonatomic) UIColor *knobColor;
@property (nonatomic) struct CGPoint { double x; double y; } lastGestureTranslation;
@property (retain, nonatomic) NSMutableArray *panHistory;
@property (nonatomic) unsigned long long panHistoryIdx;
@property (nonatomic) BOOL isTempOverlay;
@property (nonatomic) BOOL tempOverlayQuadIsValid;
@property (weak, nonatomic) id<ICDocCamImageQuadEditOverlayDelegate> delegate;
@property (retain, nonatomic) ICDocCamImageQuad *quad;
@property (readonly, nonatomic) ICDocCamImageQuad *adjustedQuad;
@property (readonly, nonatomic) BOOL isDraggingKnob;
@property (readonly, nonatomic) BOOL isQuadValid;
@property (readonly, nonatomic) BOOL containsPointOutsideOfOverlayBounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (void).cxx_destruct;
- (void)didPan:(id)a0;
- (id)closestKnobToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectFromApplyingOrientation:(long long)a0 toContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setImage:(id)a0 orientation:(long long)a1;
- (void)setTempOverlayMagnification:(double)a0 animationDuration:(double)a1;
- (void)setUpKnobs;
- (void)setupLoupeLayerIfNeeded;
- (void)touchesBeganOnQuadEditPanGestureRecognizerDelegate:(id)a0;
- (void)unselectAllKnobs;
- (void)updateKnobLocationsToRect:(id)a0;
- (void)updateOutlineAndKnobColorForCurrentValidityIfNecessary;
- (void)updateOutlineAndKnobColorForIsValid:(BOOL)a0;
- (void)updateOutlineLayer;
- (void)updateSelectedKnobContents;

@end
