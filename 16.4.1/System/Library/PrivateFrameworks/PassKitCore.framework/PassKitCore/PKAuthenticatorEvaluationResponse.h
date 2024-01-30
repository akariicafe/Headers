@class NSString, NSData;

@interface PKAuthenticatorEvaluationResponse : NSObject

@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) BOOL biometricMatch;
@property (readonly, copy, nonatomic) NSData *credential;

+ (id)responseWithResult:(long long)a0;
+ (id)responseWithResult:(long long)a0 biometricMatch:(BOOL)a1 credential:(id)a2;

- (void).cxx_destruct;

@end
