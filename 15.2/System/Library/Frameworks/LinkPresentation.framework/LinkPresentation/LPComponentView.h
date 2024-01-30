@protocol LPComponentViewHost;

@interface LPComponentView : UIView

@property (readonly, weak, nonatomic) id<LPComponentViewHost> host;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isFlipped;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithHost:(id)a0;
- (void)didMoveToWindow;
- (void)layoutComponentView;
- (void)componentViewDidMoveToWindow;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)a0;

@end
