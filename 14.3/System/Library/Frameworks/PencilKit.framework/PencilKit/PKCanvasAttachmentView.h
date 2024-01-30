@class PKCanvasView, NSMutableArray;

@interface PKCanvasAttachmentView : PKAttachmentView

@property (weak, nonatomic) PKCanvasView *canvasView;
@property (nonatomic) BOOL _wantsFullyRenderedNotification;
@property (nonatomic) double drawingWidth;
@property (retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks;

- (void).cxx_destruct;
- (double)drawingScale;
- (void)drawingDidChange;
- (BOOL)wantsFullyRendered;
- (void)fullyRendered;
- (BOOL)disableTileAnimations;

@end
