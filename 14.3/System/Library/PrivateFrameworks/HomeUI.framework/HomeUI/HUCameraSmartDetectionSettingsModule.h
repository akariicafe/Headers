@class HFConditionCollection, NSSet, UIViewController, NSString, HFCameraSmartDetectionCondition, HFStaticItem, HFItemProvider;

@interface HUCameraSmartDetectionSettingsModule : HFItemModule <HUCameraSettingsModule> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HFItemProvider *motionDetectionSettingsItemProvider;
@property (readonly, nonatomic) HFItemProvider *motionDetectionOffOnItemProvider;
@property (readonly, nonatomic) unsigned long long settingsContext;
@property (retain, nonatomic) HFCameraSmartDetectionCondition *condition;
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

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (id)didSelectItem:(id)a0;
- (BOOL)isItemHeader:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 conditionCollection:(id)a2 settingsContext:(unsigned long long)a3;
- (id)updateMotionDetectionSettingForItem:(id)a0;
- (id)updateSignificantEventConfiguration:(id)a0;
- (id)enableSmartMotion:(BOOL)a0 forItem:(id)a1;

@end
