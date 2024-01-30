@class NSString;
@protocol HUConfigurationViewControllerDelegate;

@interface HUPCSetupNetworkRouterProtectionManualViewController : HUPCItemTableContentController <HUConfigurationViewController>

@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithProfile:(id)a0 configurationDelegate:(id)a1;

@end
