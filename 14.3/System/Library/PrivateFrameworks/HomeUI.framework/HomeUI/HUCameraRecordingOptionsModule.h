@class NSString, NSSet, HFStaticItemProvider, HUCameraSmartDetectionSettingsModule, HUCameraCloudStorageSettingsModule, HFStaticItem, UIViewController;

@interface HUCameraRecordingOptionsModule : HFItemModule <HUCameraSettingsModule>

@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFStaticItemProvider *recordAudioItemProvider;
@property (retain, nonatomic) HFStaticItem *recordAudioItem;
@property (readonly, nonatomic) HUCameraSmartDetectionSettingsModule *smartDetectionModule;
@property (readonly, nonatomic) HUCameraCloudStorageSettingsModule *cloudStorageModule;
@property (readonly, nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)didSelectItem:(id)a0;
- (void)_buildItemProviders;
- (BOOL)isItemHeader:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1;
- (void)updateRecordAudioValue:(BOOL)a0;

@end
