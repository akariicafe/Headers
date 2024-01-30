@class HMHome, HUUserNotificationTopicServiceListModuleController, HUAnnounceSettingsItemModuleController, HFUserNotificationServiceTopic, HUFaceRecognitionItemModuleController;

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController

@property (retain, nonatomic) HUUserNotificationTopicServiceListModuleController *moduleController;
@property (retain, nonatomic) HUAnnounceSettingsItemModuleController *announceSettingsModuleController;
@property (retain, nonatomic) HUFaceRecognitionItemModuleController *faceRecognitionModuleController;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithHome:(id)a0 topic:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (BOOL)_shouldShowFaceRecognition;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)a0 personManager:(id)a1 animated:(BOOL)a2;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)a0 animated:(BOOL)a1;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;

@end
