@class NSString, NSArray, PFUbiquityKnowledgeVector, NSMutableDictionary, NSMutableArray, NSObject, PFUbiquityGlobalObjectIDCache, NSNumber;
@protocol OS_dispatch_queue;

@interface PFUbiquityStoreSaveSnapshot : NSObject {
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityGlobalObjectIDCache *_gidCache;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (id)initForExport:(id)a0;
- (id)initWithExportingPeerID:(id)a0;

@end
