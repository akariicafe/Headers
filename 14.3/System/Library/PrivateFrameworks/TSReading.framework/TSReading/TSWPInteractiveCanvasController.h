@class NSString;

@interface TSWPInteractiveCanvasController : TSDInteractiveCanvasController <TSDGestureTarget>

@property (readonly, nonatomic) BOOL shouldRespondToTextHyperlinks;
@property (readonly, nonatomic) BOOL handleHyperlinksWithTextGRs;
@property (readonly, nonatomic) BOOL isEditingText;
@property (readonly, nonatomic) BOOL isTearingDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (BOOL)handleGesture:(id)a0;
- (void)dealloc;
- (void)didBeginEditingText;
- (id)closestRepToPoint:(struct CGPoint { double x0; double x1; })a0 forStorage:(id)a1;
- (id)beginEditingRepForInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })scrollFocusRectForModel:(id)a0 withSelection:(id)a1;
- (BOOL)showsComments;
- (void)setShowsComments:(BOOL)a0;
- (BOOL)canHandleGesture:(id)a0;
- (void)gestureSequenceWillBegin;
- (void)gestureSequenceDidEnd;
- (id)infosToHideForCanvas:(id)a0;
- (void)resumeEditing;
- (struct CGImage { } *)textImageFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)p_beginEditingPossibleContainedRep:(id *)a0;
- (void)p_recursivelyAddRep:(id)a0 forStorage:(id)a1 toSet:(id)a2;
- (id)p_repsForStorage:(id)a0;
- (id)_repsForStorage:(id)a0;
- (void)withLayoutForModel:(id)a0 withSelection:(id)a1 performBlock:(id /* block */)a2;
- (void)willEndEditingText;
- (BOOL)suppressDoubleTapForSelection;
- (BOOL)textRepsShouldTileAggressively;
- (id)closestRepToPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)zoomColumnAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)showHyperlinkInfoForField:(id)a0 inRep:(id)a1 openInEditMode:(BOOL)a2;
- (void)closeHyperlinkPopover;
- (BOOL)hyperlinkPopoverIsShown;
- (BOOL)cellCommentsAllowedForTableInfo:(id)a0;

@end
