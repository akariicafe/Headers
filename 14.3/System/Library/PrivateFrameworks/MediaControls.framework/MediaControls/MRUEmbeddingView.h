@class UIViewController;

@interface MRUEmbeddingView : UIView

@property (retain, nonatomic) UIViewController *embeddedViewController;
@property (weak, nonatomic) UIViewController *parent;
@property (nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)removeViewController;
- (void)showViewController;
- (void)hideViewController;
- (void)embedViewController:(id)a0 parent:(id)a1;

@end
