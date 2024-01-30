@class NSString, UILabel, UIActivityIndicatorView;

@interface WFChooseNetworkHeaderViewController : UIViewController

@property (weak, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL animating;
@property (weak, nonatomic) UILabel *label;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;

@end
