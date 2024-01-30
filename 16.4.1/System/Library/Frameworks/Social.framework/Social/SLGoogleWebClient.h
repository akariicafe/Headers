@class NSString, NSArray;

@interface SLGoogleWebClient : NSObject <SLWebClient> {
    NSString *_clientID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *clientRedirect;
@property (readonly, nonatomic) NSString *tokenURL;
@property (readonly, nonatomic) NSString *authRequestURL;
@property (readonly, nonatomic) NSString *userInfoURL;
@property (readonly, nonatomic) NSString *fallbackUserInfoURL;
@property (readonly, nonatomic) Class webAuthRequestClass;
@property (readonly, nonatomic) Class tokenRequestClass;
@property (readonly, nonatomic) Class tokenResponseClass;
@property (readonly, nonatomic) Class webUserInfoResponseClass;
@property (readonly, nonatomic) Class fallbackWebUserInfoResponseClass;
@property (readonly, nonatomic) NSString *clientSecret;
@property (readonly, nonatomic) NSString *clientRedirectForAppOpenURL;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) NSArray *defaultScope;
@property (readonly, nonatomic) NSArray *youTubeScope;
@property (readonly, nonatomic) NSArray *emailScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
