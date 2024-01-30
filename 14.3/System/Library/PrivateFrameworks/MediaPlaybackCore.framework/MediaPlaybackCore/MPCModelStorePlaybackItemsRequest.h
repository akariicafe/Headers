@class NSArray, NSString, MPModelResponse, MPCPlaybackRequestEnvironment, MPSectionedCollection;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequest, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>

@property (copy, nonatomic) NSArray *playbackPrioritizedIndexPaths;
@property (retain, nonatomic) MPModelResponse *previousResponse;
@property (nonatomic) BOOL shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic) BOOL wantsDetailedKeepLocalRequestableResponse;
@property (nonatomic) BOOL allowLocalEquivalencies;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) MPSectionedCollection *sectionedModelObjects;
@property (copy, nonatomic) NSArray *storeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)requiresNetwork;
+ (void)MPC_consumeSiriAssetInfo:(id)a0 withCompletion:(id /* block */)a1;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
