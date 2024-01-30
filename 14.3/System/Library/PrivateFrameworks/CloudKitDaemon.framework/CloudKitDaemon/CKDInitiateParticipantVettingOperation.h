@class NSData, CKShareMetadata, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;

@interface CKDInitiateParticipantVettingOperation : CKDOperation

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, nonatomic) NSData *encryptedKey;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) id<CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ participantVettingProgressBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (void)main;
- (void)_sendRequest:(BOOL)a0;
- (int)operationType;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)a0 forShareWithURL:(id)a1 error:(id *)a2;
- (id)_encryptedKeyDataWithShareMetadata:(id)a0 error:(id *)a1;
- (void)_handleVettingInitiationProgress:(id)a0;

@end
