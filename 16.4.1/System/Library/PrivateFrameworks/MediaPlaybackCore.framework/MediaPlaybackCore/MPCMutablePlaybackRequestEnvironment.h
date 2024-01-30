@class NSString, ICUserIdentity, MPCPlaybackDelegationProperties;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (retain, nonatomic) ICUserIdentity *userIdentity;
@property (copy, nonatomic) NSString *trustID;

- (void)setRequestingBundleIdentifier:(id)a0;
- (void)setUserIdentity:(id)a0;
- (void)setClientVersion:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRequestingBundleVersion:(id)a0;
- (void)setClientIdentifier:(id)a0;
- (void)setTrustID:(id)a0;
- (void)setDelegationProperties:(id)a0;

@end
