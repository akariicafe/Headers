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
- (id)defaultSubsectionInfos;
- (BOOL)canPerformMigration;
- (id)sectionIdentifier;
- (void)dataProviderDidLoad;
- (void).cxx_destruct;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)sortKey;
- (id)sortDescriptors;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)displayNameForSubsectionID:(id)a0;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (id)defaultSectionInfo;
- (id)parentSectionIdentifier;
- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)startWatchdog;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (BOOL)syncsBulletinDismissal;
- (id)universalSectionIdentifier;
- (id)sectionIcon;
- (id)sectionParameters;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (void)noteSectionInfoDidChange:(id)a0;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;
- (id)sectionDisplayName;
- (BOOL)canClearBulletinsByDate;
- (BOOL)canClearAllBulletins;

@end
