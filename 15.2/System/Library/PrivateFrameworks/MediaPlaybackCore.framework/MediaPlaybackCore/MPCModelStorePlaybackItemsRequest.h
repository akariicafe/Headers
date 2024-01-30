@class MPCPlaybackRequestEnvironment, NSArray, ICSharedListeningQueue, MPModelResponse, NSString, MPSectionedCollection, NSDictionary;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>

@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (retain, nonatomic) ICSharedListeningQueue *sharedListeningQueue;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSDictionary *storeIDsToPlaybackAuthorizationTokensMap;
@property (copy, nonatomic) id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
+ (void)MPC_consumeSiriAssetInfo:(id)a0 userIdentity:(id)a1 completion:(id /* block */)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
