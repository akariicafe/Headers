@class NSURL, ICAttachment, NSSNewsViewController;

@interface ICNewsViewController : UIViewController

@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSSNewsViewController *newsViewController;

- (id)initWithURL:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
