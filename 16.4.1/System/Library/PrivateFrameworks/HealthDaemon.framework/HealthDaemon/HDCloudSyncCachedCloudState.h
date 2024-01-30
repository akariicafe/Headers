@class HDAssertion, HDProfile, HDCloudSyncRepository;

@interface HDCloudSyncCachedCloudState : NSObject {
    HDAssertion *_accessibilityAssertion;
}

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDCloudSyncRepository *repository;
@property (nonatomic) long long changedZonesCount;
@property (nonatomic) long long deletedZonesCount;
@property (nonatomic) long long changedRecordsCount;
@property (nonatomic) long long deletedRecordsCount;
@property (nonatomic) long long operationCountForAnalytics;

- (id)detailedDescription;
- (id)init;
- (void).cxx_destruct;
- (id)masterZoneForContainerID:(id)a0 error:(id *)a1;
- (BOOL)addDatabaseWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (BOOL)addZoneWithIdentifier:(id)a0 error:(id *)a1;
- (id)attachmentZoneForContainerID:(id)a0 error:(id *)a1;
- (id)initWithRepository:(id)a0 accessibilityAssertion:(id)a1;
- (id)privateMetadataZoneForContainerID:(id)a0 error:(id *)a1;
- (BOOL)resetServerChangeTokenForContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (id)serverChangeTokenForContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (BOOL)setServerChangeToken:(id)a0 containerIdentifier:(id)a1 databaseScope:(long long)a2 error:(id *)a3;
- (id)unifiedSyncZoneForContainerID:(id)a0 error:(id *)a1;
- (BOOL)unitTest_deleteDatabaseWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (id)zoneForRecordID:(id)a0 containerIdentifier:(id)a1 error:(id *)a2;
- (id)zoneIdentifiersForContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (id)zoneIdentifiersRequiringFetchForContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (id)zoneIdentifiersWithIdentityLossForContainerIdentifier:(id)a0 databaseScope:(long long)a1 error:(id *)a2;
- (id)zonesByIdentifierWithError:(id *)a0;
- (id)zonesByIdentifierWithError:(id *)a0 filter:(id /* block */)a1;
- (id)zonesForContainerID:(id)a0 error:(id *)a1;

@end
