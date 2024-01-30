@class UIViewController;

@interface MRUEmbeddingView : UIView

@property (retain, nonatomic) UIViewController *embeddedViewController;
@property (weak, nonatomic) UIViewController *parent;
@property (nonatomic, getter=isActive) BOOL active;

- (void)layoutSubviews;
- (void)removeViewController;
- (void)showViewController;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)hideViewController;
- (void).cxx_destruct;
- (void)embedViewController:(id)a0 parent:(id)a1;

@end
