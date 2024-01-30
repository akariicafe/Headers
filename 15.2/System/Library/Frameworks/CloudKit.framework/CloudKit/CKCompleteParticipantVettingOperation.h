@class NSString, CKShareMetadata, NSData, NSURL, CKCompleteParticipantVettingOperationInfo;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKCompleteParticipantVettingOperation : CKOperation <CKCompleteParticipantVettingOperationCallbacks>

@property (copy, nonatomic) NSString *vettingToken;
@property (copy, nonatomic) NSString *vettingEmail;
@property (copy, nonatomic) NSString *vettingPhone;
@property (copy, nonatomic) NSString *routingKey;
@property (copy, nonatomic) NSData *encryptedKey;
@property (copy, nonatomic) NSString *baseToken;
@property (copy, nonatomic) NSString *displayedHostname;
@property (copy, nonatomic) NSURL *reconstructedShareURL;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (readonly, nonatomic) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKCompleteParticipantVettingOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ completeParticipantVettingCompletionBlock;

- (void)performCKOperation;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleReconstructedShareURL:(id)a0;
- (void)handleFetchedShareMetadata:(id)a0;
- (id)initWithVettingToken:(id)a0 vettingRecord:(id)a1 displayedHostname:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
