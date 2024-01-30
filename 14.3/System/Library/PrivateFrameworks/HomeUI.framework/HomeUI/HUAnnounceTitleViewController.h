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

- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (void)viewDidLoad;
- (void)continuePressed:(id)a0;
- (BOOL)_limitToNonScrollingContentHeight;

@end
