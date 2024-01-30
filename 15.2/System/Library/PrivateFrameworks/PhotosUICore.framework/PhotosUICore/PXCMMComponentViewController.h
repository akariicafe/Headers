@class PXCMMSession;

@interface PXCMMComponentViewController : UIViewController

@property (readonly, nonatomic) PXCMMSession *session;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)preferredContentHeightForWidth:(double)a0;

@end
