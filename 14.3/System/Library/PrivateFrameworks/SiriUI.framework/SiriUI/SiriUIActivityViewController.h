@protocol SiriUIActivityViewControllerDelegate;

@interface SiriUIActivityViewController : UIActivityViewController

@property (weak, nonatomic) id<SiriUIActivityViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;

@end
