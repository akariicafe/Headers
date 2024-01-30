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

- (void)setGlobalAnnounceSetting:(long long)a0;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)a0;
- (void)_queue_addObserver:(id)a0;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (long long)_queue_globalContentPreviewSetting;
- (long long)globalAnnounceHeadphonesSetting;
- (void)_queue_removeObserver:(id)a0;
- (id)_queue_allEffectiveSectionInfos;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)_queue_setGlobalContentPreviewSetting:(long long)a0;
- (id)_queue_globalScheduledDeliveryTimes;
- (id)globalScheduledDeliveryTimes;
- (long long)globalAnnounceSetting;
- (void)setGlobalScheduledDeliverySetting:(long long)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (long long)_queue_globalScheduledDeliveryShowNextSummarySetting;
- (void)_queue_setGlobalAnnounceSetting:(long long)a0;
- (long long)globalAnnounceCarPlaySetting;
- (id)_queue_sectionInfosForSectionIDs:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (id)allSectionInfo;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void)setGlobalScheduledDeliveryTimes:(id)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)setGlobalContentPreviewSetting:(long long)a0;
- (id)allEffectiveSectionInfo;
- (id)_queue_sectionInfoForSectionID:(id)a0;
- (void)_queue_setGlobalScheduledDeliverySetting:(long long)a0;
- (id)sectionInfoForSectionID:(id)a0;
- (void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (void)dealloc;
- (void)_queue_getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (id)_queue_allSectionInfos;
- (long long)globalScheduledDeliverySetting;
- (long long)globalContentPreviewSetting;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (long long)_queue_globalScheduledDeliverySetting;
- (long long)_queue_globalAnnounceSetting;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)a0;
- (id)_queue_effectiveSectionInfoForSectionID:(id)a0;
- (void)_queue_setSectionInfo:(id)a0 forSectionID:(id)a1;

@end
