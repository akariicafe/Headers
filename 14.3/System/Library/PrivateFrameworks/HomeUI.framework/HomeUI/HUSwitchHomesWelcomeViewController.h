@class OBLinkTrayButton, OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerDelegate;

@interface HUSwitchHomesWelcomeViewController : HUImageOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *continueButton;
@property (retain, nonatomic) OBLinkTrayButton *changeButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
