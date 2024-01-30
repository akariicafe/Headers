@class NSString, NSArray, NSURL;

@interface BCOAuth2Parameters : NSObject <NSSecureCoding> {
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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)responseEncryptionKey;
- (id)tokenExchangeURL;
- (id)tokenExchangeBodyWithCode:(id)a0;
- (id)authenticationSessionURL;

@end
