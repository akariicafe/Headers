@interface NPKIDVRemoteDeviceCredentialPreflightStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long credentialType;
@property (readonly, nonatomic) unsigned long long provisionedPassesCount;
@property (readonly, nonatomic) BOOL preflightSuccessful;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialType:(unsigned long long)a0 provisionedPassesCount:(unsigned long long)a1 preflightSuccessful:(BOOL)a2;

@end
