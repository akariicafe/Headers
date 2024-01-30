@class NSString;

@interface DAEASOAuthPKCEChallenge : NSObject

@property (nonatomic) long long codeChallengeMethod;
@property (retain, nonatomic) NSString *codeVerifier;
@property (retain, nonatomic) NSString *codeChallenge;

+ (id)newCodeVerifier;
+ (id)base64URLEncode:(id)a0;
+ (id)convertToString:(long long)a0;

- (void).cxx_destruct;
- (id)codeChallengeFromVerifier:(id)a0 withCodeChallengeMethod:(long long)a1;
- (id)initWithCodeChallengeMethod:(long long)a0;

@end
