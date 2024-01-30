@class NSMutableDictionary, NSMutableArray;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKDAcceptSharesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (retain, nonatomic) NSMutableArray *shareURLsToAccept;
@property (retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL;
@property (nonatomic) unsigned long long numShareAcceptAttempts;
@property (retain, nonatomic) NSMutableDictionary *anonymousShareTuplesAcceptAttempted;
@property (retain, nonatomic) NSMutableArray *anonymousShareTuplesAccepted;
@property (retain, nonatomic) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ acceptCompletionBlock;

- (id)activityCreate;
- (id)nameForState:(unsigned long long)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)a0 forShareWithURL:(id)a1 error:(id *)a2;
- (void)_fetchMetadataForShares;
- (void)_prepareShareMetadata;
- (void)_fetchAcceptedShares;
- (void)_decryptShareMetadata;
- (BOOL)_acceptShares;
- (void)_processAnonymousShares;
- (void)_performCallbackForURL:(id)a0 withShare:(id)a1 error:(id)a2;
- (BOOL)_callingParticipantOONForShareMetadata:(id)a0;
- (void)_handleShareURLAccepted:(id)a0 forShare:(id)a1 responseCode:(id)a2;
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)a0;
- (id)_keySwapForOONParticipant:(id)a0;
- (BOOL)_validateInvitedPCSCanBeDecryptedForShare:(id)a0;

@end
