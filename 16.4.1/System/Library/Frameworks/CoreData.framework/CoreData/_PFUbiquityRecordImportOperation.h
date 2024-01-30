@class NSError, PFUbiquityTransactionLog, NSString, PFUbiquitySwitchboardEntry, NSManagedObjectContext, PFUbiquityKnowledgeVector, NSMutableDictionary, NSPersistentStoreCoordinator, NSMutableSet, NSObject, PFUbiquityImportContext;
@protocol _PFUbiquityRecordImportOperationDelegate;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSCopying, NSManagedObjectContextFaultingDelegate> {
    NSManagedObjectContext *_moc;
    NSPersistentStoreCoordinator *_psc;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSMutableDictionary *_resolvedConflicts;
    BOOL _lockedExistingCoord;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    PFUbiquityImportContext *_importContext;
    BOOL _success;
    BOOL _transactionDidRollback;
    BOOL _wroteKV;
    NSError *_operationError;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)dealloc;
- (id)copy;
- (id)init;
- (long long)context:(id)a0 shouldHandleInaccessibleFault:(id)a1 forObjectID:(id)a2 andTrigger:(id)a3;
- (void)respondToStoreTransactionStateChangeNotification:(id)a0;
- (id)retainedDelegate;

@end
