@class NSString;

@interface NEProfilePayloadBaseVPN : NEProfilePayloadBase

@property (nonatomic) BOOL userNameRequired;
@property (nonatomic) BOOL passwordRequired;
@property (nonatomic) BOOL proxyUserNameRequired;
@property (nonatomic) BOOL proxyPasswordRequired;
@property (nonatomic) BOOL sharedSecretRequired;
@property (nonatomic) BOOL pinRequired;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *proxyUserName;
@property (copy, nonatomic) NSString *proxyPassword;
@property (copy, nonatomic) NSString *sharedSecret;
@property (copy, nonatomic) NSString *pin;

- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)validatePayload;
- (BOOL)setPostprocessedPayloadContents:(id)a0;
- (void)extractPayloadContentsHTTPProxy:(id)a0;
- (void)extractPayloadContentsUserNamePassword:(id)a0;
- (void)extractPayloadContentsSharedSecret:(id)a0;
- (void)extractPayloadContentsPIN:(id)a0;
- (void)extractPayloadContents:(id)a0;
- (id)getPreprocessedPayloadContents;

@end
