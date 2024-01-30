@class NSRecursiveLock, NSString, NSMutableDictionary, PFUbiquityLocation, PFUbiquityKnowledgeVector, PFUbiquitySaveSnapshot;

@interface PFUbiquityTransactionLog : NSObject {
    NSMutableDictionary *_contents;
    int _transactionLogType;
    BOOL _useTemporaryLogLocation;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityLocation *_temporaryTransactionLogLocation;
    PFUbiquityLocation *_stagingTransactionLogLocation;
    NSString *_fileProtectionOption;
    BOOL _inTemporaryLocation;
    BOOL _inStagingLocation;
    BOOL _inPermanentLocation;
    PFUbiquityKnowledgeVector *_knowledgeVector;
    PFUbiquitySaveSnapshot *_saveSnapshot;
    NSString *_localPeerID;
    BOOL _loadUsingRetry;
    BOOL _loadedComparisonMetadata;
    BOOL _loadedImportMetadata;
    BOOL _loadedInsertedObjectData;
    BOOL _loadedUpdatedObjectData;
    BOOL _loadedDeletedObjectData;
    BOOL _loadedContents;
    NSRecursiveLock *_contentsLock;
}

- (id)initWithStoreName:(id)a0 andSaveSnapshot:(id)a1 andRootLocation:(id)a2;
- (id)initWithTransactionLogLocation:(id)a0 andLocalPeerID:(id)a1;
- (id)initWithTransactionLogURL:(id)a0 ubiquityRootLocation:(id)a1 andLocalPeerID:(id)a2;
- (id)description;
- (id)init;
- (void)dealloc;

@end
