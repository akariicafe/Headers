@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAccessoryFirmwareUpdateSetupViewController : HUImageOBWelcomeController <HUConfigurationViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *enableAutomaticUpdatesButton;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
