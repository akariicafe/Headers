@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController

@property (nonatomic) BOOL selectionEnabled;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)selectAll:(id)a0;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;
- (void)loadView;
- (BOOL)canBecomeFirstResponder;
- (void)interactionDidEnd:(id)a0;
- (id)actionForHyperlink:(id)a0 inRep:(id)a1 gesture:(id)a2;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;

@end
