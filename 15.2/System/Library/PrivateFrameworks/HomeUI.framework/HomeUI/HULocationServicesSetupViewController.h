@class OBBoldTrayButton, OBLinkTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HULocationServicesSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBBoldTrayButton *enableLocationServicesButton;
@property (retain, nonatomic) OBLinkTrayButton *disableLocationServicesButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
