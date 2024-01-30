@interface ScrollToTopView : UIView

@property (copy, nonatomic) id /* block */ targetBlock;
@property (copy, nonatomic) id /* block */ showBarsBlock;
@property (readonly, nonatomic) double defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_targetScrollView;
- (void).cxx_destruct;
- (void)_showBars;
- (id)initWithTargetBlock:(id /* block */)a0;
- (void)_tappedScrollToTopView:(id)a0;

@end
