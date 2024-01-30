@class TSAInteractiveCanvasController, UIGestureRecognizer;

@interface TIACanvasViewController : TSWPiOSCanvasViewController

@property UIGestureRecognizer *hyperlinkGestureRecognizer;
@property (readonly, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setUpGestureRecognizers;
- (id)commonGestureRecognizers;
- (BOOL)wantsHyperlinkGestureRecognizer;
- (id)p_LocalGestureRecognizers;

@end
