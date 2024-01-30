@class CKContainer, NSString, FCCKPrivateDatabaseSchema;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate>

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainer *containerWithZoneWidePCS;
@property (retain, nonatomic) CKContainer *secureContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)run;

- (void)run;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)a0 completion:(id /* block */)a1;
- (void)fetchShouldSecureSubscriptionsForDatabase:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (id)_prepareShortcutsAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;

@end
