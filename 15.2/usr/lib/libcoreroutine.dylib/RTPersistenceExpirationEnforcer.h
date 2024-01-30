@class RTPersistenceManager;

@interface RTPersistenceExpirationEnforcer : NSObject {
    RTPersistenceManager *_persistenceManager;
}

- (id)objectsWithLifetimeMatchingObjectWithID:(id)a0 context:(id)a1 error:(id *)a2;
- (void)mergeEntriesFromDictionary:(id)a0 intoDictionary:(id)a1;
- (void)mergeIdentifiersFromArray:(id)a0 entityName:(id)a1 intoDictionary:(id)a2;
- (id)initWithPersistenceManager:(id)a0;
- (BOOL)repairInvalidExpirationDatesWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)removeExpiredRecordsWithObjectIDs:(id)a0 context:(id)a1 error:(id *)a2;
- (id)init;
- (id)collectRecordIDsByTypeExpiredBeforeDate:(id)a0 ownedByThisDevice:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)a0 allowPropagation:(BOOL)a1 context:(id)a2 error:(id *)a3;
- (BOOL)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)a0 context:(id)a1 error:(id *)a2;
- (id)entitiesWithDeviceAndExpirationProperty:(id)a0 ownedByThisDevice:(BOOL)a1;
- (BOOL)removeExpiredRecordsBeforeDate:(id)a0 context:(id)a1 error:(id *)a2;
- (id)objectIDsByTypeAffectedByDeletingObjectWithID:(id)a0 context:(id)a1 error:(id *)a2;

@end
