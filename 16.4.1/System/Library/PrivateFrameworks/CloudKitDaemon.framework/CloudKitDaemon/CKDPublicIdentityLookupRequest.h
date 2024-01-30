@class NSArray, NSMutableArray, CKDOperation;

@interface CKDPublicIdentityLookupRequest : NSObject {
    CKDOperation *_operation;
    NSArray *_lookupInfosToFetch;
    NSMutableArray *_missingLookupInfos;
}

@property BOOL hasPerformed;
@property BOOL isCancelled;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (copy, nonatomic) id /* block */ perLookupInfoProgressBlock;
@property (copy, nonatomic) id /* block */ lookupCompletionBlock;

- (void)finishWithError:(id)a0;
- (id)ckShortDescription;
- (void)cancel;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_generateOONPrivateKeyWithError:(id *)a0;
- (void)_receivedUserIdentity:(id)a0 forLookupInfo:(id)a1 error:(id)a2;
- (void)_saveUserIdentity:(id)a0 forLookupInfo:(id)a1;
- (BOOL)_tryComplete;
- (id)initWithOperation:(id)a0 lookupInfos:(id)a1;
- (void)performRequest;
- (id)spawnURLRequests;

@end
