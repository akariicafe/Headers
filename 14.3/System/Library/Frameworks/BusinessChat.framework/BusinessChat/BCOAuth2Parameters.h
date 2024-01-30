@class NSString, NSArray, NSURL;

@interface BCOAuth2Parameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *clientSecret;
@property (retain, nonatomic) NSArray *scope;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *responseType;
@property (retain, nonatomic) NSString *responseEncryptionKey;
@property (retain, nonatomic) NSURL *authorizationURL;
@property (retain, nonatomic) NSURL *accessTokenURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)tokenExchangeURLWith:(id)a0;
- (id)authenticationSessionURL;

@end
