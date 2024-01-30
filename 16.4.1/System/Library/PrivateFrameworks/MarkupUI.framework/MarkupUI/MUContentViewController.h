@class AKController;
@protocol MUContentViewControllerDelegate;

@interface MUContentViewController : UIViewController

@property (weak) id<MUContentViewControllerDelegate> delegate;
@property (retain) AKController *annotationController;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1 delegate:(id)a2;

@end
