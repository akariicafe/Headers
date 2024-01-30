@class NSString, NSData;

@interface DAEASOAuthIdentity : NSObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *refreshToken;
@property (copy, nonatomic) NSString *oauthURI;
@property (copy, nonatomic) NSString *tokenRequestURI;
@property (copy, nonatomic) NSData *jwksData;
@property (copy, nonatomic) NSString *jwksURI;
@property (copy, nonatomic) NSString *issuer;

- (void).cxx_destruct;

@end
