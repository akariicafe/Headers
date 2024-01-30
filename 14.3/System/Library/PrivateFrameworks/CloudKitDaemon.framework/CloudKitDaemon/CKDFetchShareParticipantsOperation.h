@class CKDPublicIdentityLookupRequest, NSArray;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKDFetchShareParticipantsOperation : CKDOperation

@property (retain, nonatomic) CKDPublicIdentityLookupRequest *pendingRequest;
@property (retain, nonatomic) NSArray *userIdentityLookupInfos;
@property (retain, nonatomic) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (int)operationType;
- (void)_handleFetchedInfo:(id)a0 withIdentity:(id)a1 error:(id)a2;
- (void)_fetchIdentities;

@end
