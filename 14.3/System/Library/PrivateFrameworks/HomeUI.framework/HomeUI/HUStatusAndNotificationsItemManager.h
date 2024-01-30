@class HFUserNotificationServiceSettings, HFItem, HUChimeOnHomePodListItem, HUChimeOnHomePodSingleItem, HUTriggerConditionEditorItemModule, HFStaticItem, HUCameraSmartDetectionSettingsModule;
@protocol HFServiceLikeItem, HFUserNotificationServiceSettingsProviding;

@interface HUStatusAndNotificationsItemManager : HFItemManager

@property (retain, nonatomic) HFStaticItem *includeInStatusItem;
@property (retain, nonatomic) HFStaticItem *allowNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowMotionNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowCameraSnapshotsItem;
@property (retain, nonatomic) HUChimeOnHomePodSingleItem *chimeOnHomePodSingleItem;
@property (retain, nonatomic) HUChimeOnHomePodListItem *chimeOnHomePodListItem;
@property (retain, nonatomic) HFStaticItem *allowDoorbellNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowAnalogChimeNotificationItem;
@property (retain, nonatomic) HFStaticItem *allowActivityNotificationsItem;
@property (retain, nonatomic) HFStaticItem *allowCameraStatusChangesItem;
@property (retain, nonatomic) HFStaticItem *allowCameraReachabilityChangeNotificationsItem;
@property (nonatomic) BOOL showsChimeOnHomePodSection;
@property (nonatomic) BOOL showsCameraSnapshotSection;
@property (nonatomic) BOOL showsMotionNotificationSection;
@property (nonatomic) BOOL showsCameraSmartNotificationSection;
@property (nonatomic) BOOL showsTriggerConditionSection;
@property (nonatomic) BOOL hasDoorbellCamera;
@property (nonatomic) BOOL showsSmartActivitySection;
@property (nonatomic) BOOL showsCameraStatusChangeSection;
@property (nonatomic) BOOL serviceItemBelongsToCamera;
@property (readonly, nonatomic) id<HFUserNotificationServiceSettingsProviding> notificationSettingsProvider;
@property (readonly, nonatomic) HFUserNotificationServiceSettings *notificationSettings;
@property (nonatomic) BOOL showStatusSection;
@property (nonatomic) BOOL showsForServiceDetails;
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceItem;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;
@property (readonly, nonatomic) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule;

- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithServiceItem:(id)a0 delegate:(id)a1 home:(id)a2;
- (id)homeStatusVisibleObject;
- (id)_updateNotificationSettings:(id)a0;
- (id)updateAllowNotifications:(BOOL)a0;
- (id)updateAllowMotionNotifications:(BOOL)a0;
- (id)updateChimeOnHomePod:(BOOL)a0;
- (id)updateAllowDoorbellNotifications:(BOOL)a0;
- (id)updateAllowChimeAnalogNotifications:(BOOL)a0;
- (id)updateAllowSnapshotsInNotifications:(BOOL)a0;
- (id)updateAllowSmartActivityNotifications:(BOOL)a0;
- (id)updateAllowCameraStatusChangeNotifications:(BOOL)a0;
- (id)updateAllowCameraReachabilityStatusChangeNotifications:(BOOL)a0;
- (id)updateNotificationCondition:(id)a0;
- (id)updateCameraSmartNotificationCondition:(id)a0;

@end
