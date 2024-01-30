@class NSString, NSArray, PFUbiquityKnowledgeVector, NSMutableDictionary, NSMutableArray, NSObject, PFUbiquityGlobalObjectIDCache, NSNumber;
@protocol OS_dispatch_queue;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSMutableArray *entityNames;
@property (readonly, nonatomic) NSMutableArray *peerIDs;
@property (readonly, nonatomic) NSMutableArray *globalObjectIDs;
@property (readonly, nonatomic) NSMutableArray *primaryKeys;
@property (readonly, nonatomic) NSMutableDictionary *insertedObjects;
@property (readonly, nonatomic) NSMutableDictionary *updatedObjects;
@property (readonly, nonatomic) NSMutableDictionary *deletedObjects;
@property (readonly, nonatomic) NSMutableDictionary *peerStates;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) NSString *exportingPeerID;
@property (retain, nonatomic) NSString *localPeerID;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *storeKV;
@property (readonly, nonatomic) NSMutableDictionary *globalObjectIDToPermanentManagedObjectID;
@property (readonly, nonatomic) NSMutableDictionary *managedObjectIDToGlobalObjectID;
@property (readonly, nonatomic) NSMutableDictionary *entityNameToIndex;
@property (readonly, nonatomic) NSMutableDictionary *peerIDToIndex;
@property (readonly, nonatomic) NSMutableDictionary *primaryKeyToIndex;
@property (readonly, nonatomic) NSMutableDictionary *globalObjectIDToIndex;
@property (retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalObjectIDCache;

- (id)init;
- (void)dealloc;
- (id)globalObjectIDFromCompressedObjectID:(id)a0;
- (id)createKnowledgeVectorFromPeerStates;
- (void)_setFilesDeletedInTransaction:(id)a0;
- (void)generatePeerStates;
- (void)reserveTransactionNumberWithStoreExportContext:(id)a0;
- (void)resetFromOptimisticLockingException;
- (id)addManagedObject:(id)a0 withTransactionType:(int)a1 andStoreExportContext:(id)a2 withError:(id *)a3;
- (id)filesInsertedInTransaction;
- (id)description;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)a0;
- (id)initWithExportingPeerID:(id)a0;
- (id)initForExport:(id)a0;
- (id)checkIndecies:(id)a0;
- (id)noSyncCheckIndex:(id)a0 forValue:(id)a1 fromArrayOfValues:(id)a2;
- (id)globalObjectIDForManagedObject:(id)a0 withStoreExportContext:(id)a1;
- (id)checkIndex:(id)a0 forValue:(id)a1 fromArrayOfValues:(id)a2;
- (void)setDeletedObjects:(id)a0;
- (id)createUbiquityDictionary:(id)a0 withStoreExportContext:(id)a1 error:(id *)a2;
- (id)transactionNumberFromPeerStates:(id)a0;
- (void)setUpdatedObjects:(id)a0;
- (id)filesDeletedInTransaction;
- (void)setTransactionNumber:(id)a0 peerStates:(id)a1 andPeerIDs:(id)a2;
- (void)prepareForGlobalIDReplacement;
- (void)setEntityNames:(id)a0 globalObjectIDs:(id)a1 primaryKeys:(id)a2 forStoreName:(id)a3 withRootLocation:(id)a4;
- (void)setInsertedObjects:(id)a0;
- (void)replaceGlobalObjectID:(id)a0 withGlobalObjectID:(id)a1;
- (void)finishGlobalIDReplacement;

@end
