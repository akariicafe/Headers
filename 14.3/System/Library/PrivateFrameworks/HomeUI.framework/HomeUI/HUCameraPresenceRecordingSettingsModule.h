@class HMHome, NSString, NSArray, HFItem, NSSet, HFStaticItemProvider, HUCameraUsageOptionItemProvider, UIViewController;

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule <ICQUpgradeFlowManagerDelegate, HUCameraSettingsModule> {
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
}

@property (retain, nonatomic) HUCameraUsageOptionItemProvider *recordingSettingItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) NSArray *optionItems;
@property (nonatomic) BOOL didCompleteCloudUpgradeOffer;
@property (nonatomic) unsigned long long upgradeState;
@property (nonatomic) unsigned long long offerState;
@property (nonatomic) unsigned long long numCamerasSupportRecordingService;
@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *cameraProfiles;
@property (readonly, nonatomic) unsigned long long presenceEventType;
@property (readonly, nonatomic) unsigned long long accessModeSetting;
@property (readonly, nonatomic) NSString *longestCameraUsageOptionItemTitle;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long displayStyle;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)_titleString;
- (id)itemProviders;
- (id)initWithItemUpdater:(id)a0;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;
- (id)didSelectItem:(id)a0;
- (BOOL)isItemHeader:(id)a0;
- (id)showOptionsItem;
- (void)_buildItemProvider;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 presenceEventType:(unsigned long long)a2;
- (unsigned long long)countCameraProfilesWithRecordingService;
- (void)presentInsufficientPrivilegesAlert;
- (void)presentGenericError;
- (void)_dispatchUpdateForCameraProfile:(id)a0;
- (void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)a0;
- (void)sendCAMetricInfo;
- (void)_clearItemsUpdating;
- (void)presentMissingSupportedHubAlert;
- (id)updateStreamingSetting:(unsigned long long)a0 isRetry:(BOOL)a1;

@end
