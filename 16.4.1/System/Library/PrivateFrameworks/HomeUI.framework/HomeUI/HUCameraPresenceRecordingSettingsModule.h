@class HMHome, FeatureChangeObserver, NSArray, NSString, NSSet, HFItem, HFStaticItemProvider, HUCameraUsageOptionItemProvider, UIViewController, NSNumber;

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
@property (retain, nonatomic) NSNumber *currentPlanCameraCount;
@property (retain, nonatomic) FeatureChangeObserver *featureChangeObserver;
@property (nonatomic) BOOL pendingUpgradeRequest;
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

+ (id)stringFromNumber:(id)a0;
+ (id)messageForHomeOwnerQuotaAlertForCameraCount:(id)a0;
+ (id)messageForQuotaAlertForCameraCount:(id)a0;
+ (id)titleForHomeOwnerQuotaAlertForCameraCount:(id)a0;
+ (id)titleForQuotaAlertForCameraCount:(id)a0;
+ (id)upgradeURLForCameraCount:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)itemProviders;
- (id)_titleString;
- (id)didSelectItem:(id)a0;
- (void)presentMissingSupportedHubAlert;
- (id)showOptionsItem;
- (id)updateStreamingSetting:(unsigned long long)a0 isRetry:(BOOL)a1;
- (void)_buildItemProvider;
- (void)_clearItemsUpdating;
- (void)_dispatchUpdateForCameraProfile:(id)a0;
- (void)_presentCloudUpgradeFlowWithCameraCount:(unsigned long long)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)clearLoadingIndicator;
- (unsigned long long)countCameraProfilesWithRecordingService;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 cameraProfiles:(id)a1 presenceEventType:(unsigned long long)a2;
- (BOOL)isItemHeader:(id)a0;
- (void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)a0;
- (void)presentGenericError;
- (void)presentHomeOwnerQuotaAlertForOverflowCount:(long long)a0;
- (void)presentInsufficientPrivilegesAlert;
- (void)presentSharedAdminQuotaAlertForCount:(unsigned long long)a0;
- (void)sendCAMetricInfo;
- (void)updatePlanCameraCount;
- (void)upgradeFlowManagerDidCancel:(id)a0;
- (void)upgradeFlowManagerDidComplete:(id)a0;

@end
