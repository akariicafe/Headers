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

- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (BOOL)syncEnabled;
- (id)startPageSectionsManager;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (long long)_settingForValue:(id)a0;
- (void).cxx_destruct;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (BOOL)_isShowBackgroundImageEnabled;
- (void)didDeleteRemoteRecordWithID:(id)a0;
- (void)_updateStartPageSectionOrder:(id)a0;
- (id)_startPageSectionOrder;

@end
