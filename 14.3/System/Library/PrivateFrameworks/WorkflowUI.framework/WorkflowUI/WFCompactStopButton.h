@class NSProgress, WFWorkflowProgressView;

@interface WFCompactStopButton : UIButton

@property (readonly, nonatomic) WFWorkflowProgressView *progressView;
@property (retain, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setHighlighted:(BOOL)a0;
- (void)transitionToCompleted:(BOOL)a0 animated:(BOOL)a1;
- (void)popCompletedCheckmark;
- (void)handleTouchUpInside;
- (void)popCompletedCheckmarkWithHaptic:(BOOL)a0;

@end
