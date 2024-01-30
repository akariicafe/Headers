@class NSArray, NSString, WBSStartPageSectionManager;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess> {
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_perSitePreferencesStore;
- (void)_updateStartPageSectionOrder:(id)a0;
- (void)deleteBackgroundImageDirectory;
- (BOOL)_isShowBackgroundImageEnabled;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (BOOL)syncEnabled;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (id)_deviceClass;
- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (id)startPageSectionsManager;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (long long)_settingForValue:(id)a0;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (id)_startPageSectionOrder;
- (void).cxx_destruct;

@end
