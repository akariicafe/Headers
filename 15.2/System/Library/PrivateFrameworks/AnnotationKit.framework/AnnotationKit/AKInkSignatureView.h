@class PKTool, UIColor, PKDrawing, PKCanvasView, NSString;

@interface AKInkSignatureView : UIView <PKCanvasViewDelegate>

@property (retain) PKCanvasView *canvasView;
@property (copy) PKTool *tool;
@property (retain) PKDrawing *latestDrawing;
@property BOOL hasStrokes;
@property (retain, nonatomic) UIColor *strokeColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (void)layoutSubviews;
- (void)clear;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)canvasViewDrawingDidChange:(id)a0;
- (struct CGPath { } *)copyPotracedPathAndReturnDrawing:(id *)a0;
- (void)_updateTool;

@end
