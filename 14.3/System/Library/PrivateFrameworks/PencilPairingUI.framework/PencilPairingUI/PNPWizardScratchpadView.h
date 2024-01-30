@class UIView, NSString, NSArray, PNPWizardScratchpadCanvasView, NSTimer, CAShapeLayer, PNPWizardInkWeightControl, NSMutableArray, PNPWizardScratchpadToast;
@protocol PNPWizardScratchpadViewDelegate;

@interface PNPWizardScratchpadView : UIView <PKCanvasViewDelegate, PNPPencilInteractionEventDestination> {
    UIView *_backgroundView;
    PNPWizardScratchpadCanvasView *_canvasView;
    PNPWizardScratchpadCanvasView *_fingerDrawingCanvasView;
    CAShapeLayer *_frameLayer;
    PNPWizardInkWeightControl *_inkWeightControl;
    BOOL _inkWeightControlVisible;
    long long _selectedInkIndex;
    long long _previousMarkingToolIndex;
    NSMutableArray *_inkViews;
    NSArray *_colors;
    UIView *_toolsBackgroundPillView;
    PNPWizardScratchpadToast *_toastView;
    NSTimer *_showToastTimer;
}

@property (nonatomic) BOOL showingToast;
@property (nonatomic) BOOL isDrawing;
@property (nonatomic) unsigned long long step;
@property (weak, nonatomic) id<PNPWizardScratchpadViewDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } pointForFirstTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)viewWillMoveToSuperview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_canvasViewWillBeginDrawing:(id)a0;
- (void)canvasViewDidBeginDrawing:(id)a0;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)eventSource:(id)a0 hadPencilDoubleTapped:(id /* block */)a1;
- (id)_selectedInkView;
- (id)_selectedInk;
- (void)_selectInkAtIndex:(long long)a0;
- (void)_animateLayoutChange:(id /* block */)a0;
- (void)_deselectAllInks;
- (void)_animateInkChange:(id /* block */)a0;
- (void)_initializeToastViewIfNecessary;
- (BOOL)_viewIsPartOfStylusCanvasView:(id)a0;
- (void)_dismissToastNotification;
- (void)_showToastNotificationAndAnimateStrokeAway;
- (void)_inkViewPressed:(id)a0;
- (void)_triggerShowToastTimer;
- (void)_showToastNotificationWithInitialAnimation;
- (void)_animateAdjustmentSliderAppearance:(id /* block */)a0;
- (void)clearCanvas;
- (void)prepareCanvasViews;

@end
