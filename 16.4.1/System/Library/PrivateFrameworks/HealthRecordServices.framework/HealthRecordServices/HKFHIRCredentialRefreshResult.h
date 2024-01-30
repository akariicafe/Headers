@class HKFHIRRequestTaskEndStates, HKFHIRCredential, HDFHIRAuthResponse, NSError;

@interface HKFHIRCredentialRefreshResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFHIRCredential *credential;
@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse;
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndStates *endStates;
@property (readonly, copy, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCredential:(id)a0 authResponse:(id)a1 endStates:(id)a2 error:(id)a3;

@end
