@class NSString, NSArray, NSURL;

@interface BCNativeOAuth2URLProvider : NSObject <BCNativeOAuth2Protocol, NSSecureCoding> {
    NSString *_clientIdentifier;
    NSString *_clientSecret;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_responseEncryptionKey;
    NSURL *_authorizationURL;
    NSURL *_accessTokenURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLProviderWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)authenticationSessionURL;
- (id)responseEncryptionKey;
- (BOOL)shouldHandleRedirectURI:(id)a0;
- (id)tokenExchangeBodyWithCode:(id)a0;
- (id)tokenExchangeURL;

@end
