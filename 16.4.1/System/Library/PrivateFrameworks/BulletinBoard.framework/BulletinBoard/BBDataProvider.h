@class NSString, BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *_identity;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)initialized;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)sectionBundlePath;
- (id)defaultSectionInfo;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)noteSectionInfoDidChange:(id)a0;
- (id)displayNameForSubsectionID:(id)a0;
- (BOOL)syncsBulletinDismissal;
- (id)defaultSubsectionInfos;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (id)sectionIdentifier;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)parentSectionIdentifier;
- (id)sectionDisplayName;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (id)universalSectionIdentifier;
- (id)sortKey;
- (BOOL)canPerformMigration;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (void)startWatchdog;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)invalidate;
- (id)sectionParameters;
- (void).cxx_destruct;
- (id)sortDescriptors;
- (id)sectionIcon;
- (void)dataProviderDidLoad;
- (BOOL)canClearAllBulletins;
- (BOOL)canClearBulletinsByDate;

@end
