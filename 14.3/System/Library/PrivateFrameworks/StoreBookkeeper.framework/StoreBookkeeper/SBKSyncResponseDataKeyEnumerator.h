@class SBKSyncTransaction, SBKSyncResponseData, NSEnumerator;

@interface SBKSyncResponseDataKeyEnumerator : NSObject

@property (retain) SBKSyncResponseData *responseData;
@property (retain) SBKSyncTransaction *transaction;
@property (copy) id /* block */ completionBlock;
@property BOOL resolvedConflictsNeedSyncToServer;
@property (retain) NSEnumerator *updatedKeysEnumerator;
@property (retain) NSEnumerator *conflictedKeysEnumerator;
@property (retain) NSEnumerator *deletedKeysEnumerator;

- (void).cxx_destruct;
- (id)initWithResponseData:(id)a0;
- (void)enumerateKeysInResponseForTransaction:(id)a0 completionBlock:(id /* block */)a1;
- (void)_processNextKey;
- (void)_processUpdatedKey:(id)a0 isConflict:(BOOL)a1 isDirty:(BOOL *)a2;
- (void)_processDeletedKey:(id)a0 isDirty:(BOOL *)a1;

@end
