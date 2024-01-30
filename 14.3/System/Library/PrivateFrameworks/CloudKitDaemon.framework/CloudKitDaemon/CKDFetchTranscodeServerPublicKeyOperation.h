@class NSString, NSURL, CKPublicKey;

@interface CKDFetchTranscodeServerPublicKeyOperation : CKDOperation

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *transcodeServerHostname;
@property (retain, nonatomic) NSURL *transcodeServerPublicKeyURL;
@property (retain) CKPublicKey *transcodeServerPublicKey;

+ (struct __SecPolicy { } *)createTranscodeServerTrustPolicy;

- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (void).cxx_destruct;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)main;
- (void)determineTranscodeServerPublicKeyURL;
- (void)fetchCachedTranscodePublicKey;
- (void)fetchRemoteTranscodePublicKey;

@end
