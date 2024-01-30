@class ICTextView;

@interface ICTextViewControllerView : UIView

@property (readonly, nonatomic) ICTextView *textView;

- (id)initWithTextView:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
