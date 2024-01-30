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
@property (nonatomic) BOOL preserveStartAndEndDates;
@property (nonatomic) BOOL callWillDeleteFromDatabase;
@property (readonly, nonatomic) NSNumber *lastInsertedDeletedObjectPersistentID;
@property (readonly, copy, nonatomic) NSMutableSet *deletedObjectTypeSet;
@property (readonly, nonatomic) unsigned long long deletedObjectCount;

- (void)finish;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 transaction:(id)a1;
- (BOOL)deleteObjectWithPersistentID:(long long)a0 entityClass:(Class)a1 error:(id *)a2;
- (BOOL)deleteObjectWithPersistentID:(long long)a0 objectUUID:(id)a1 entityClass:(Class)a2 objectType:(id)a3 provenanceIdentifier:(id)a4 deletionDate:(id)a5 error:(id *)a6;
- (struct _HDObjectDeletionInfo { BOOL x0; long long x1; long long x2; long long x3; })deleteInfoForObjectWithUUID:(id)a0 error:(id *)a1;
- (BOOL)_deleteAssociatedObjectsForPersistentID:(long long)a0 entityClass:(Class)a1 deletionDate:(id)a2 error:(id *)a3;
- (BOOL)_startAndEndDatesForSampleWithPersistentID:(long long)a0 startTimestampOut:(double *)a1 endTimestampOut:(double *)a2 database:(id)a3 error:(id *)a4;
- (id)_provenanceIDForDeletedObjectWithOriginalProvenanceID:(id)a0 error:(id *)a1;
- (id)_localSourceIDForSourceID:(id)a0 error:(id *)a1;

@end
