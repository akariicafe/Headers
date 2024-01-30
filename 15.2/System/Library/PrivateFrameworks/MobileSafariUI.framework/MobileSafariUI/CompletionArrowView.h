@class UITableViewCell;

@interface CompletionArrowView : UIImageView

@property (weak, nonatomic) UITableViewCell *parentCell;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
