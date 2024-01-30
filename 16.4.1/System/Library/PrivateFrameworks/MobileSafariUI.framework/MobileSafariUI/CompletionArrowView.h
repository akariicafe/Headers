@class UITableViewCell;

@interface CompletionArrowView : UIButton

@property (weak, nonatomic) UITableViewCell *parentCell;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
