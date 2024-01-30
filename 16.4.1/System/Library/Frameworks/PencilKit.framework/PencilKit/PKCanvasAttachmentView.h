@class PKCanvasView, NSMutableArray;

@interface PKCanvasAttachmentView : PKAttachmentView

@property (weak, nonatomic) PKCanvasView *canvasView;
@property (nonatomic) BOOL _wantsFullyRenderedNotification;
@property (nonatomic) double drawingWidth;
@property (retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks;

- (void).cxx_destruct;
- (void)drawingDidChangeVisibleStrokes:(BOOL)a0;
- (BOOL)disableTileAnimations;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })drawingTransform;
- (void)fullyRendered;
- (BOOL)wantsFullyRendered;

@end
