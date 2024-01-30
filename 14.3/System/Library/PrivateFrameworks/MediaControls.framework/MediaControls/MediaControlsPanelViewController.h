@class UIView, MPAVRoutingViewController;

@interface MediaControlsPanelViewController : UIViewController

@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)panelViewControllerForCoverSheet;

- (void).cxx_destruct;

@end
