@interface SXTextTangierCanvasViewController : TSWPiOSCanvasViewController

@property (nonatomic) BOOL selectionEnabled;

- (long long)overrideUserInterfaceStyle;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)loadView;
- (BOOL)canBecomeFirstResponder;
- (void)selectAll:(id)a0;
- (void)dealloc;
- (void)interactionDidEnd:(id)a0;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)actionForHyperlink:(id)a0 inRep:(id)a1 gesture:(id)a2;

@end
