@class ICLiveLinkIdentity, NSString, MPCPlaybackRequestEnvironment, MPCPlaybackSharedListeningProperties, ICUserIdentity;

@interface MPCSharedListeningPlaybackContext : MPPlaybackContext <MPCPlaybackContextUserIdentityConsuming, MPCModelPlaybackRequestEnvironmentConsuming>

@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) ICLiveLinkIdentity *identity;
@property (copy, nonatomic) ICUserIdentity *userIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queueFeederClass;
+ (BOOL)supportsAutoPlay;

- (void).cxx_destruct;
- (id)init;
- (long long)repeatType;
- (id)descriptionComponents;
- (BOOL)isCompatibleWithReplacementContext:(id)a0 incompatibleReason:(id *)a1;
- (long long)shuffleType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;

@end
