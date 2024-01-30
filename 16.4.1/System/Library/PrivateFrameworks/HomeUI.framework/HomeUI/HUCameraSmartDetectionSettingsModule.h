@class HFConditionCollection, NSSet, UIViewController, NSString, HFCameraSmartDetectionCondition, HFStaticItem, HFItemProvider;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HFItemProvider *motionDetectionSettingsItemProvider;
@property (readonly, nonatomic) HFItemProvider *motionDetectionOffOnItemProvider;
@property (readonly, nonatomic) unsigned long long settingsContext;
@property (retain, nonatomic) HFCameraSmartDetectionCondition *condition;
@property (retain, nonatomic) HFStaticItem *aClipIsRecordedItem;
@property (retain, nonatomic) HFStaticItem *anyMotionDetectedItem;
@property (retain, nonatomic) HFStaticItem *specificMotionDetectedItem;
@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) HFConditionCollection *conditionCollection;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_updatedCurrentSignificantEventConfiguration:(id)a0 withSelectedConfiguration:(id)a1 context:(unsigned long long)a2;
+ (id)_updatedNotificationCurrentSignificantEventConfiguration:(id)a0 withSelectedConfiguration:(id)a1 cameraProfile:(id)a2;
+ (id)_updatedRecordingCurrentSignificantEventConfiguration:(id)a0 withSelectedConfiguration:(id)a1 cameraProfile:(id)a2;
+ (BOOL)isSpecificMotionSelectedForConfiguration:(id)a0 withCurrentConfiguration:(id)a1;
+ (id)notificationConfiguration:(id)a0 forRecordingTriggers:(unsigned long long)a1;
+ (id)notificationConfigurationForAClipIsRecorded;
+ (id)recordingConfiguration:(id)a0 withCurrentConfiguration:(id)a1 forProfile:(id)a2;
+ (id)selectedNotificationConfigurationForAClipIsRecorded;
+ (id)selectedNotificationConfigurationForAnyMotion;
+ (id)selectedNotificationConfigurationForSmartMotion;
+ (id)selectedRecordingConfigurationForAnyMotion;
+ (id)selectedRecordingConfigurationForSmartMotion;
+ (id)specificMotionNotificationConfigurationForCameraProfile:(id)a0;
+ (id)updateCurrentSignificantEventConfiguration:(id)a0 withSelectedConfiguration:(id)a1 cameraProfile:(id)a2 context:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)itemProviders;
- (id)didSelectItem:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)enableSmartMotion:(BOOL)a0 forItem:(id)a1;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 conditionCollection:(id)a2 settingsContext:(unsigned long long)a3;
- (BOOL)isItemHeader:(id)a0;
- (id)updateMotionDetectionSettingForItem:(id)a0;
- (id)updateSignificantEventConfiguration:(id)a0;

@end
