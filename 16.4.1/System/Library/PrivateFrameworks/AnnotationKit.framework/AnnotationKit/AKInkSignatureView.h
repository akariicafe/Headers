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

- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)teardown;
- (void)clear;
- (void).cxx_destruct;
- (void)canvasViewDrawingDidChange:(id)a0;
- (void)_updateTool;
- (struct CGPath { } *)copyPotracedPathAndReturnDrawing:(id *)a0;

@end
