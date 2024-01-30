@class UIImageView, NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAnnounceTitleViewController : HUCenterFillOBWelcomeController <HUConfigurationViewController>

@property (retain, nonatomic) UIImageView *contentImageView;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)continuePressed:(id)a0;
- (BOOL)_limitToNonScrollingContentHeight;

@end
