@class NSURL, NSString, NSArray;

@interface BCServerSideOAuth2URLProvider : NSObject <BCBaseOAuth2Protocol, NSSecureCoding> {
    NSURL *_authorizationURL;
    NSString *_clientIdentifier;
    NSArray *_scope;
    NSString *_state;
    NSString *_responseType;
    NSString *_additionalParameters;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *redirectURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLProviderWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)authenticationSessionURL;
- (BOOL)shouldHandleRedirectURI:(id)a0;

@end
