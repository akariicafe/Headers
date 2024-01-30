@class HDDatabaseTransaction, HDProfile, NSMutableSet, NSMutableDictionary, NSNumber, NSString;

@interface HDDataEntityDeletionContext : NSObject {
    HDProfile *_profile;
    NSMutableDictionary *_deleteStatementsByClassName;
    NSMutableDictionary *_deletedObjectProvenanceIDsByOriginalProvenanceID;
    NSMutableDictionary *_localSourceIDsByOriginalSourceID;
    NSString *_startAndEndDatesSQL;
    NSString *_deleteInfoSQL;
}

@property (readonly, nonatomic) HDDatabaseTransaction *transaction;
@property (copy, nonatomic) id /* block */ recursiveDeleteAuthorizationBlock;
@property (nonatomic) BOOL insertDeletedObjects;
@property (nonatomic) BOOL preserveExactStartAndEndDates;
@property (nonatomic) BOOL callWillDeleteWithTransaction;
@property (readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (readonly, copy, nonatomic) NSMutableSet *deletedObjectTypeSet;
@property (readonly, nonatomic) unsigned long long deletedObjectCount;

- (void)finish;
- (void).cxx_destruct;
- (struct _HDObjectDeletionInfo { BOOL x0; long long x1; long long x2; long long x3; })deleteInfoForObjectWithUUID:(id)a0 error:(id *)a1;
- (BOOL)deleteObjectWithPersistentID:(long long)a0 entityClass:(Class)a1 error:(id *)a2;
- (BOOL)deleteObjectWithPersistentID:(long long)a0 objectUUID:(id)a1 entityClass:(Class)a2 objectType:(id)a3 provenanceIdentifier:(id)a4 deletionDate:(id)a5 deletedSampleIntervals:(id)a6 error:(id *)a7;
- (id)initWithProfile:(id)a0 transaction:(id)a1;

@end
