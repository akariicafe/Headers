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

- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)a0;
- (id)activeSectionInfo;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (long long)effectiveGlobalAnnounceSetting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0;
- (void)getSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (void)dealloc;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withCompletion:(id /* block */)a2;
- (id)allSectionInfo;
- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)a0;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)a0;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)a0;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (id)init;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)a0;
- (void)updateSectionInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (void)invalidate;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)a0;
- (id)allSectionIDs;
- (void)getEffectiveSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (id)allEffectiveSectionInfo;
- (void).cxx_destruct;
- (void)getEffectiveSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (id)sectionInfoForSectionID:(id)a0;
- (void)setEffectiveGlobalAnnounceSetting:(long long)a0;
- (id)initWithQueue:(id)a0;

@end
