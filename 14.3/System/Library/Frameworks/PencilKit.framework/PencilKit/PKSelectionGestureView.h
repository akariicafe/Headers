@class PKSelectionController, PKSelectionInteraction;

@interface PKSelectionGestureView : UIView

@property (retain, nonatomic) PKSelectionInteraction *selectionInteraction;
@property (weak, nonatomic) PKSelectionController *selectionController;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectionController:(id)a1;

@end
