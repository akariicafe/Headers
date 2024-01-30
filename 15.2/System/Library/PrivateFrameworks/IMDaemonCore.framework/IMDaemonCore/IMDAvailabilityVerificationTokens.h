@class NSString;

@interface IMDAvailabilityVerificationTokens : NSObject

@property (readonly, nonatomic) NSString *subscriptionValidationToken;
@property (readonly, nonatomic) NSString *encryptionValidationToken;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSubscriptionValidationToken:(id)a0 encryptionValidationToken:(id)a1;
- (BOOL)isEqualToAvailabilityVerificationTokens:(id)a0;

@end
