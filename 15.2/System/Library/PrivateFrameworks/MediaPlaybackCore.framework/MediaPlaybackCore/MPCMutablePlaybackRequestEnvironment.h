@class ICUserIdentity, NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource;

@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *clientVersion;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) MPCPlaybackDelegationProperties *delegationProperties;
@property (copy, nonatomic) MPCPrivateListeningStateSource *privateListeningStateSource;
@property (retain, nonatomic) ICUserIdentity *userIdentity;

- (void)setUserIdentity:(id)a0;
- (void)setRequestingBundleIdentifier:(id)a0;
- (void)setClientIdentifier:(id)a0;
- (void)setClientVersion:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRequestingBundleVersion:(id)a0;
- (void)setPrivateListeningStateSource:(id)a0;
- (void)setDelegationProperties:(id)a0;

@end
