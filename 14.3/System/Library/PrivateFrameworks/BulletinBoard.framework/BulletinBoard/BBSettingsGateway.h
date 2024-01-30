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
+ (id)clientInterface;
+ (id)serverInterface;

- (id)initWithQueue:(id)a0;
- (id)init;
- (void)getEffectiveSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)allSectionIDs;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalSpokenNotificationSetting;
- (long long)effectiveGlobalContentPreviewsSetting;
- (id)allSectionInfo;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (id)activeSectionInfo;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withCompletion:(id /* block */)a2;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)updateSectionInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)a0;
- (void)getSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)a0;
- (id)allEffectiveSectionInfo;
- (void)invalidate;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (id)sectionInfoForSectionID:(id)a0;

@end
