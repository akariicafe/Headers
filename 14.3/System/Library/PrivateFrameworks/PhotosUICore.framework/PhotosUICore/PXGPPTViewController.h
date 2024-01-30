@class PXGLayout, PXGView;

@interface PXGPPTViewController : UIViewController

@property (readonly, nonatomic) PXGLayout *initialLayout;
@property (readonly, nonatomic) PXGView *gridView;

- (void).cxx_destruct;
- (void)animate:(id /* block */)a0 animationRenderingCompletionHandler:(id /* block */)a1 proceedHandler:(id /* block */)a2;
- (void)_handleDoubleTap:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithLayout:(id)a0;
- (void)viewDidLoad;

@end
