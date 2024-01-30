@class HMHome, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUCameraRecordingPermissionsViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) OBTrayButton *setupButton;
@property (weak, nonatomic) id<HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
