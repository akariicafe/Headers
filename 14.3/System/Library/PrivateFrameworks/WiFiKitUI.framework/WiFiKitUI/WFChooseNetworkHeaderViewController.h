@class NSString, UILabel, UIActivityIndicatorView;

@interface WFChooseNetworkHeaderViewController : UIViewController

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL animating;
@property (weak, nonatomic) UILabel *label;

- (id)init;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
