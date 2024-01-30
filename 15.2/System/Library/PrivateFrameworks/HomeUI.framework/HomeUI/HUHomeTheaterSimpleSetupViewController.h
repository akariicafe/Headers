@class OBLinkTrayButton, OBTrayButton, NSString, HMAccessory, HMHome;
@protocol HMMediaDestination, HUConfigurationViewControllerDelegate;

@interface HUHomeTheaterSimpleSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController>

@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) id<HMMediaDestination> destination;
@property (retain, nonatomic) OBTrayButton *confirmButton;
@property (retain, nonatomic) OBLinkTrayButton *skipButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
