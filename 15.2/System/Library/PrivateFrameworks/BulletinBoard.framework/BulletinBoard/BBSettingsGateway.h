@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serverInterface;
+ (id)clientInterface;

- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)a0;
- (id)initWithQueue:(id)a0;
- (id)activeSectionInfo;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)a0;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)getEffectiveSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)a0;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (long long)effectiveGlobalAnnounceSetting;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)a0;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)effectiveGlobalContentPreviewsSetting;
- (id)init;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)a0;
- (id)allSectionIDs;
- (id)allSectionInfo;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void)updateSectionInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidate;
- (id)allEffectiveSectionInfo;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (id)sectionInfoForSectionID:(id)a0;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)getEffectiveSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withCompletion:(id /* block */)a2;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)a0;
- (void)getSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)setEffectiveGlobalAnnounceSetting:(long long)a0;

@end
