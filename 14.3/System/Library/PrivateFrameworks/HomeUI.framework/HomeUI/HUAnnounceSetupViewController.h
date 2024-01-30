@class NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAnnounceSetupViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (readonly, nonatomic) unsigned long long step;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithHome:(id)a0 step:(unsigned long long)a1;
- (void)continuePressed:(id)a0;

@end
