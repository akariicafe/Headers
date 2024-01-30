@class NSSet, NSMutableDictionary, NSDictionary, NSMutableArray;
@protocol CKFetchShareMetadataOperationCallbacks;

@interface CKDFetchShareMetadataOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary *shareTokenMetadatasToFetchByURL;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeysSet;
@property (nonatomic) BOOL clientWillDisplaySystemAcceptPrompt;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;
@property (retain, nonatomic) id<CKFetchShareMetadataOperationCallbacks> clientOperationCallbackProxy;
@property (nonatomic) BOOL forceDSRefetch;
@property (nonatomic) BOOL errorOnOON;
@property (copy, nonatomic) id /* block */ shareMetadataFetchedBlock;

- (void)_finishOnCallbackQueueWithError:(id)a0;
- (int)operationType;
- (BOOL)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_continueHandlingFetchedShareMetadata:(id)a0 shareURL:(id)a1;
- (void)_continueSharePCSPrepForShareMetadata:(id)a0 shareURL:(id)a1;
- (BOOL)_currentUserIsOONForShareMetadata:(id)a0;
- (id)_decodeProtectedFullToken:(id)a0 tokenMetadata:(id)a1;
- (void)_decryptRootRecordsForShareURL:(id)a0 withMetadata:(id)a1 completionHandler:(id /* block */)a2;
- (void)_fetchShortTokenMetadata;
- (void)_handleTokenResolveWithLookupInfo:(id)a0 shareMetadata:(id)a1 responseCode:(id)a2 urlByShortTokenLookupInfos:(id)a3 tokensToFetchByURL:(id)a4;
- (void)_performCallbackForURL:(id)a0 withMetadata:(id)a1 error:(id)a2;
- (void)_prepPPPCSDataForDugongShareMetadata:(id)a0 withInvitationToken:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareShortTokens;

@end
