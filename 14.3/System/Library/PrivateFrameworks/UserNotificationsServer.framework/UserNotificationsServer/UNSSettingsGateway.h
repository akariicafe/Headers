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

- (void)_queue_setGlobalSpokenNotificationSetting:(long long)a0;
- (long long)globalSpokenNotificationSetting;
- (id)init;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (void)removeObserver:(id)a0;
- (long long)_queue_globalSpokenNotificationSetting;
- (id)_queue_allSectionInfos;
- (void)dealloc;
- (id)_queue_sectionInfoForSectionID:(id)a0;
- (void)addObserver:(id)a0;
- (long long)_queue_globalContentPreviewSetting;
- (void)_queue_setSectionInfo:(id)a0 forSectionID:(id)a1;
- (id)allSectionInfo;
- (void)setGlobalContentPreviewSetting:(long long)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void)_queue_addObserver:(id)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)_queue_removeObserver:(id)a0;
- (void)_queue_getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (id)_queue_allEffectiveSectionInfos;
- (void)setGlobalSpokenNotificationSetting:(long long)a0;
- (void)_queue_setGlobalContentPreviewSetting:(long long)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (id)_queue_sectionInfosForSectionIDs:(id)a0;
- (long long)globalContentPreviewSetting;
- (id)allEffectiveSectionInfo;
- (id)_queue_effectiveSectionInfoForSectionID:(id)a0;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (id)sectionInfoForSectionID:(id)a0;

@end
