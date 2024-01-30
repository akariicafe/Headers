@class NSString, UIView, HUQuickControlViewProfile, UIViewController;
@protocol HUQuickControlInteractiveView;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController>

@property (readonly, nonatomic) HUQuickControlViewProfile *profile;
@property (readonly, nonatomic) UIViewController *contraption;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithViewController:(id)a0 profile:(id)a1;

@end
