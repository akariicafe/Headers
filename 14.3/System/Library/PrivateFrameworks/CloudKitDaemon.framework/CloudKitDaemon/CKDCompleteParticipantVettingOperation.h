@class NSString, NSData, CKShareMetadata;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKDCompleteParticipantVettingOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *vettingToken;
@property (readonly, nonatomic) NSString *vettingEmail;
@property (readonly, nonatomic) NSString *vettingPhone;
@property (readonly, nonatomic) NSString *routingKey;
@property (readonly, nonatomic) NSData *encryptedKey;
@property (readonly, nonatomic) NSString *baseToken;
@property (readonly, nonatomic) NSString *displayedHostname;
@property (nonatomic) struct _OpaquePCSShareProtection { } *protectionInfo;
@property (retain, nonatomic) NSString *shortToken;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, nonatomic) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ verifyProgressURLReconstructedBlock;
@property (copy, nonatomic) id /* block */ verifyProgressShareMetadataFetchedBlock;

- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_reconstructShortToken;
- (void)_performAuthKitVerification;
- (void)_forceFetchShareMetadata;
- (void)_reconstructShareURL;
- (void)_verifyOONParticipant;
- (id)shortSharingTokenFromFullToken:(id)a0;
- (id)shortSharingTokenFromData:(id)a0;

@end
