@class NSString, NSURL, CKPublicKey;

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *transcodeServerHostname;
@property (retain, nonatomic) NSURL *transcodeServerPublicKeyURL;
@property (retain) CKPublicKey *transcodeServerPublicKey;
@property (nonatomic) long long type;

+ (struct __SecPolicy { } *)createTranscodeServerTrustPolicy;

- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)fetchRemoteTranscodePublicKey;
- (BOOL)operationShouldBeFlowControlled;
- (void)fetchCachedTranscodePublicKey;
- (void)main;
- (void).cxx_destruct;
- (void)determineTranscodeServerPublicKeyURL;

@end
