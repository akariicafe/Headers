@class NSString, NSData, DMTNetworkCredential;

@interface DMTPerformAutomatedDeviceEnrollmentRequest : CATTaskRequest

@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) DMTNetworkCredential *networkCredential;
@property (retain, nonatomic) NSData *networkPayload;
@property (copy, nonatomic) NSString *organizationName;
@property (nonatomic) long long organizationType;
@property (nonatomic) long long automationBehavior;
@property (nonatomic) long long networkConfiguration;
@property (readonly, nonatomic) long long effectiveNetworkConfiguration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
