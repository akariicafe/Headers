@class PXCMMSession;

@interface PXCMMComponentViewController : UIViewController

@property (readonly, nonatomic) PXCMMSession *session;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (double)preferredContentHeightForWidth:(double)a0;

@end
