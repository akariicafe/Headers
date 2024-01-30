@class NSString;

@interface HDFHIRCredential : HKOAuth2Credential

@property (readonly, copy, nonatomic) NSString *patientID;

+ (BOOL)supportsSecureCoding;
+ (id)patientHashForPatientID:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scope:(id)a3;
- (BOOL)isEqualToCredential:(id)a0 epsilonExpiration:(double)a1;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scopeString:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scopeString:(id)a3 patientID:(id)a4;
- (id)initWithIdentifier:(id)a0 requestedScopeString:(id)a1 expiration:(id)a2 scope:(id)a3 patientID:(id)a4;

@end
