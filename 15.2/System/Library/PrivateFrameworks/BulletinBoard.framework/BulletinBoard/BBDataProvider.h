@class NSString, BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *_identity;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataProviderDidLoad;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (id)sortDescriptors;
- (void)startWatchdog;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (id)defaultSectionInfo;
- (id)sectionIdentifier;
- (id)sectionIcon;
- (void)noteSectionInfoDidChange:(id)a0;
- (id)sortKey;
- (id)displayNameForSubsectionID:(id)a0;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (BOOL)initialized;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)universalSectionIdentifier;
- (BOOL)syncsBulletinDismissal;
- (id)defaultSubsectionInfos;
- (void).cxx_destruct;
- (id)sectionDisplayName;
- (id)sectionParameters;
- (BOOL)canPerformMigration;
- (id)parentSectionIdentifier;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)sectionBundlePath;
- (BOOL)canClearBulletinsByDate;
- (BOOL)canClearAllBulletins;

@end
