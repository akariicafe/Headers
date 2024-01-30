@class NSDate, NSString, NSArray, PFUbiquityKnowledgeVector, PFUbiquityImportContext, NSDictionary, NSManagedObject, NSMutableDictionary, NSNumber;

@interface PFUbiquityRecordImportConflict : NSObject

@property (retain, nonatomic) NSString *conflictingObjectGlobalIDStr;
@property (retain, nonatomic) NSManagedObject *sourceObject;
@property (retain, nonatomic) NSDictionary *conflictingLogContent;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *conflictingLogKnowledgeVector;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *currentKnowledgeVector;
@property (nonatomic) int conflictingLogTransactionType;
@property (retain, nonatomic) NSDate *conflictLogDate;
@property (retain, nonatomic) NSNumber *conflictingLogTransactionNumber;
@property (retain, nonatomic) NSArray *transactionHistory;
@property (retain, nonatomic) NSDictionary *globalIDIndexToLocalIDURIMap;
@property (retain, nonatomic) PFUbiquityImportContext *importContext;
@property (readonly, nonatomic) NSMutableDictionary *relationshipToObjectIDsToCheck;

+ (void)initialize;
+ (int)resolvedTypeForConflictingLogType:(int)a0 andLatestTransactionEntry:(id)a1 skipObject:(BOOL *)a2;
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)a0 withExportingPeerID:(id)a1 fromPeerSnapshotCollection:(id)a2;
+ (id)createSnapshotFromManagedObject:(id)a0 withSourceObject:(id)a1;
+ (id)createTransactionLogForTransactionEntry:(id)a0 withImportContext:(id)a1 error:(id *)a2;

- (BOOL)resolveMergeConflictForLogContent:(id)a0 previousSnapshot:(id)a1 andAncestorSnapshot:(id)a2 withOldVersion:(unsigned int)a3 andNewVersion:(unsigned int)a4 error:(id *)a5;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)a0 withValue:(id)a1 withGlobalIDToLocalIDURIMap:(id)a2 andTransactionLog:(id)a3;
- (id)init;
- (void)dealloc;
- (BOOL)resolveConflict:(id *)a0;
- (id)createSnapshotFromLogContent:(id)a0 withTransactionLog:(id)a1;
- (id)description;
- (void)addObjectIDsForDiff:(id)a0 forRelationship:(id)a1;
- (void)addObjectID:(id)a0 forRelationship:(id)a1;
- (id)_newNormalizedSnapshot:(id)a0 forObject:(id)a1;
- (id)createSnapshotDictionaryFromLogEntry:(id)a0 withError:(id *)a1;
- (id)createSnapshotFromBaselineForEntry:(id)a0 error:(id *)a1;
- (id)createSnapshotDictionaryForObjectWithEntry:(id)a0 inTransactionLog:(id)a1 withError:(id *)a2;

@end
