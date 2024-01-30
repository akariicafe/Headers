@class BBSettingsGateway, NSString, NSObject, NSMutableArray, BBObserver;
@protocol OS_dispatch_queue;

@interface UNSSettingsGateway : NSObject <BBObserverDelegate> {
    NSMutableArray *_observers;
    BBSettingsGateway *_settingsGateway;
    BBObserver *_settingsObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_queue_removeObserver:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (void)setGlobalScheduledDeliverySetting:(long long)a0;
- (id)_queue_allEffectiveSectionInfos;
- (long long)_queue_globalNotificationListDisplayStyleSetting;
- (void)setGlobalScheduledDeliveryTimes:(id)a0;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (void)setGlobalContentPreviewSetting:(long long)a0;
- (long long)globalNotificationListDisplayStyleSetting;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)a0;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (long long)_queue_globalContentPreviewSetting;
- (void)setGlobalAnnounceSetting:(long long)a0;
- (void)addObserver:(id)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (id)_queue_sectionInfosForSectionIDs:(id)a0;
- (long long)_queue_globalAnnounceSetting;
- (void)_queue_setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)_queue_setGlobalContentPreviewSetting:(long long)a0;
- (void)_queue_getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (id)_queue_globalScheduledDeliveryTimes;
- (void)_queue_setGlobalScheduledDeliverySetting:(long long)a0;
- (id)_queue_allSectionInfos;
- (long long)globalAnnounceCarPlaySetting;
- (long long)globalAnnounceSetting;
- (void)_queue_setGlobalAnnounceSetting:(long long)a0;
- (long long)_queue_globalScheduledDeliverySetting;
- (long long)_queue_globalScheduledDeliveryShowNextSummarySetting;
- (id)globalScheduledDeliveryTimes;
- (id)_queue_sectionInfoForSectionID:(id)a0;
- (void)dealloc;
- (long long)globalScheduledDeliverySetting;
- (void)removeObserver:(id)a0;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (void)setGlobalAnnounceCarPlaySetting:(long long)a0;
- (id)allSectionInfo;
- (void)_queue_setGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (id)init;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (long long)globalContentPreviewSetting;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (id)allEffectiveSectionInfo;
- (void).cxx_destruct;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (id)_queue_effectiveSectionInfoForSectionID:(id)a0;
- (id)sectionInfoForSectionID:(id)a0;
- (void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (long long)globalAnnounceHeadphonesSetting;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;

@end
