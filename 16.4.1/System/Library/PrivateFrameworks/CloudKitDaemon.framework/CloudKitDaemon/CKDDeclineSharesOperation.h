@class NSMutableDictionary, NSMutableArray;
@protocol CKDeclineSharesOperationCallbacks;

@interface CKDDeclineSharesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (retain, nonatomic) NSMutableArray *shareURLsToDecline;
@property (retain, nonatomic) id<CKDeclineSharesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ declineCompletionBlock;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (void).cxx_destruct;
- (BOOL)_declineShares;
- (void)_handleShareURLDeclined:(id)a0 responseCode:(id)a1;
- (void)_performCallbackForURL:(id)a0 error:(id)a1;

@end
