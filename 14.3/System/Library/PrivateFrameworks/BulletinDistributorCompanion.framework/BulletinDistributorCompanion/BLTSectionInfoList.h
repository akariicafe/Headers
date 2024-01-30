@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;
@protocol BLTSectionInfoListBBProvider, BLTSectionInfoListOverrideProvider, BLTSectionInfoListDelegate;

@interface BLTSectionInfoList : NSObject <BLTSectionInfoListProviderDelegate> {
    NSMutableDictionary *_sectionInfoListItemsBySectionID;
    NSMutableSet *_sectionInfoSectionIDs;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_loadingCompletionHandlers;
    BOOL _loading;
}

@property (weak, nonatomic) id<BLTSectionInfoListDelegate> delegate;
@property (retain, nonatomic) id<BLTSectionInfoListOverrideProvider> overrideProvider;
@property (retain, nonatomic) id<BLTSectionInfoListBBProvider> sectionInfoProvider;
@property (readonly, nonatomic, getter=hasLoaded) BOOL loaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sectionIDs;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (id)overrides;
- (id)universalSectionIDForSectionID:(id)a0;
- (void)reloadWithCompletion:(id /* block */)a0;
- (void)updateSectionInfoForSectionIDs:(id)a0 transaction:(id)a1;
- (void)removedSectionWithSectionID:(id)a0 transaction:(id)a1;
- (void)updateOverrides:(id)a0 forSectionID:(id)a1 transaction:(id)a2;
- (id)originalSettings;
- (id)overriddenSettings;
- (void)_updateListItem:(id)a0 overrides:(id)a1 sectionID:(id)a2;
- (void)_migrateFromExternalDeviceSwitchToOverrides:(id)a0 sectionID:(id)a1;
- (id)_sectionInfoFromSectionID:(id)a0 displayName:(id *)a1;
- (id)_lock_sectionInfoFromListItem:(id)a0 sectionID:(id)a1 displayName:(id *)a2;
- (id)_overriddenSectionInfoForSectionID:(id)a0 originalSectionInfo:(id *)a1 displayName:(id *)a2;
- (id)overriddenSectionInfoForSectionID:(id)a0;
- (id)bbSectionInfoForSectionID:(id)a0;
- (id)settingsDescriptionForSectionIDs:(id)a0;
- (id)sectionOverridesOnly;
- (id)sectionOverrideOnlyForSectionID:(id)a0;
- (BOOL)hasCustomSettingsSetForSectionID:(id)a0;
- (void)reloadBBSection:(id)a0 completion:(id /* block */)a1;
- (void)mapSection:(id)a0 map:(id)a1;

@end
