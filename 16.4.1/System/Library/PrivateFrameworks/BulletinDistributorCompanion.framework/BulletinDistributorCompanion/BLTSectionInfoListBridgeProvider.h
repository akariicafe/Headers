@class BLTSectionConfiguration, NSString, NPSDomainAccessor, NSDate;
@protocol BLTSectionInfoListProviderDelegate;

@interface BLTSectionInfoListBridgeProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoListOverrideProvider> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSDate *_lastKnownBridgeSettingsChangeDate;
    NPSDomainAccessor *_npsDomainAccessor;
}

@property (retain, nonatomic) BLTSectionConfiguration *sectionConfiguration;
@property (weak, nonatomic) id<BLTSectionInfoListProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reloadWithCompletion:(id /* block */)a0;
- (id)_companionSetupNotificationSettingsDictionaryForSectionInfo:(id)a0 sectionID:(id)a1;
- (id)_loadOverridesChangedSince:(id)a0;
- (void)_reloadUpdatedOverrides;
- (void)_reloadUpdatedOverridesWithCompletion:(id /* block */)a0;
- (void)enableCustomSettingsForWatchSectionID:(id)a0;
- (id)initWithSectionConfiguration:(id)a0;
- (void)removeSectionWithSectionID:(id)a0;
- (void)setCustomSettingsWithSectionInfo:(id)a0;
- (void)setCustomSettingsWithSectionInfo:(id)a0 watchSectionID:(id)a1;
- (void)setNotificationsLevel:(int)a0 sectionID:(id)a1 forceCustom:(BOOL)a2;

@end
