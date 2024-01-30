@class HMHome, HFUserNotificationServiceTopic, NSString, HUUserNotificationTopicServiceListModuleController, HUSafetyAndSecuritySettingsItemModuleController, HUAnnounceSettingsItemModuleController, HUFaceRecognitionItemModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController <HUSafetyAndSecuritySettingsModuleControllerDelegate>

@property (retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController;
@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *announceSettingsModuleController;
@property (retain, nonatomic) HUSafetyAndSecuritySettingsItemModuleController *safetyAndSecuritySettingsItemModuleController;
@property (retain, nonatomic) HUFaceRecognitionItemModuleController *faceRecognitionModuleController;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (BOOL)_shouldShowFaceRecognition;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)dismissToHomeSettings;
- (id)initWithHome:(id)a0 topic:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)a0 animated:(BOOL)a1;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)a0 personManager:(id)a1 animated:(BOOL)a2;
- (void)presentHH2OnboardingForHome:(id)a0 withDevices:(id)a1;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;

@end
