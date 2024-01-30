@class NSString, NSDictionary, NSData, MPModelPlayEvent, MPQueueFeederIdentifierRegistry;

@interface MPQueueFeeder : NSObject {
    MPQueueFeederIdentifierRegistry *_identifierRegistry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _identifierRegistryLock;
}

@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (readonly, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)errorResolverForItem:(id)a0;
- (void)replaceIdentifierRegistry:(id)a0;
- (void)identifierRegistryWithExclusiveAccess:(id /* block */)a0;
- (id)identifierRegistryWithExclusiveAccessReturningObject:(id /* block */)a0;
- (id)supplementalPlaybackContextWithReason:(long long)a0;
- (BOOL)identifierRegistryWithExclusiveAccessReturningBOOL:(id /* block */)a0;
- (id)playbackInfoForItem:(id)a0;
- (long long)identifierRegistryWithExclusiveAccessReturningInteger:(id /* block */)a0;
- (long long)supplementalPlaybackContextBehavior;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 completion:(id /* block */)a1;
- (void)applyVolumeNormalizationForItem:(id)a0;

@end
