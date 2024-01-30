@class NSUUID, MPCPlaybackAccountManager, NSArray, NSString, NSDictionary, MPSectionedCollection, MPCPlaybackRequestEnvironment, MPModelResponse;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring> {
    NSUUID *_storeIDsAnonymousGroupUUID;
}

@property (nonatomic) BOOL useUniversalAccumulator;
@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (retain, nonatomic) MPCPlaybackAccountManager *accountManager;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) MPSectionedCollection *identifiers;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (copy, nonatomic) NSDictionary *storeIDsToPlaybackAuthorizationTokensMap;
@property (copy, nonatomic) id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustProvider;
@property (nonatomic) BOOL disableImplicitSectioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
+ (void)MPC_consumeSiriAssetInfo:(id)a0 playActivityFeatureName:(id)a1 userIdentity:(id)a2 completion:(id /* block */)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
