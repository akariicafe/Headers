@interface HDContributorEntity : HDHealthEntity

+ (id)propertyForSyncAnchor;
+ (id)databaseTable;
+ (id)noneContributorUUID;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)externalReferenceForContributorReference:(id)a0 profile:(id)a1 error:(id *)a2;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)contributorEntityForNoContributorWithProfile:(id)a0 error:(id *)a1;
+ (id)primaryUserContributorInProfile:(id)a0 error:(id *)a1;
+ (id)contributorEntityWithUUID:(id)a0 profile:(id)a1 includeDeleted:(BOOL)a2 error:(id *)a3;
+ (id)insertWithUUID:(id)a0 appleID:(id)a1 callerID:(id)a2 primaryUser:(BOOL)a3 profile:(id)a4 error:(id *)a5;
+ (id)insertOrLookupContributorEntityForNoContributorWithTransaction:(id)a0 error:(id *)a1;
+ (id)primaryUserContributorInDatabase:(id)a0 error:(id *)a1;
+ (id)insertWithUUID:(id)a0 appleID:(id)a1 callerID:(id)a2 primaryUser:(BOOL)a3 syncProvenance:(long long)a4 transaction:(id)a5 error:(id *)a6;
+ (id)contributorForReference:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)insertPrimaryUserWithAppleID:(id)a0 callerID:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)deleteContributorWithUUID:(id)a0 profile:(id)a1 error:(id *)a2;

- (id)appleIDInProfile:(id)a0 error:(id *)a1;
- (BOOL)updateAppleID:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)callerIDInProfile:(id)a0 error:(id *)a1;
- (BOOL)updateCallerID:(id)a0 profile:(id)a1 error:(id *)a2;
- (id)modificationDateInProfile:(id)a0 error:(id *)a1;
- (id)syncAnchorInProfile:(id)a0 error:(id *)a1;
- (BOOL)deletedInProfile:(id)a0 error:(id *)a1;

@end
