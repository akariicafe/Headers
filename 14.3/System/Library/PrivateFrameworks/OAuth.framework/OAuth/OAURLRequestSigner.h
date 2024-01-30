@class OACredential;

@interface OAURLRequestSigner : NSObject {
    OACredential *_credential;
}

@property (nonatomic) int signatureMethod;

- (void)dealloc;
- (id)initWithCredential:(id)a0;
- (Class)signer;
- (id)signedURLRequestWithRequest:(id)a0 applicationID:(id)a1 timestamp:(id)a2;
- (id)signedURLRequestWithRequest:(id)a0;
- (id)signatureMethodString;
- (id)applyApplicationID:(id)a0 toRequest:(id)a1 containsMultiPartData:(BOOL)a2;
- (id)oauthNonce;
- (id)timestamp:(id)a0;
- (id)oauthParametersWithNonce:(id)a0 timeStamp:(id)a1;
- (id)oauthAuthorizationHeaderWithSignature:(id)a0 nonce:(id)a1 timestamp:(id)a2;

@end
