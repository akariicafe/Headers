@class MPMediaPlaybackItemMetadata, NSString;

@interface MPStreamingDownloadSessionRequest : NSObject

@property (retain, nonatomic) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic) unsigned long long preferredAssetQuality;
@property (nonatomic) BOOL prefersHLS;
@property (nonatomic) BOOL shouldStartLeaseSession;
@property (nonatomic) BOOL shouldUseAccountLessStreaming;
@property (nonatomic) BOOL shouldUseStreamingRedownload;
@property (nonatomic, getter=isStreamingRental) BOOL streamingRental;
@property (copy, nonatomic) NSString *assetSourceStoreFrontID;
@property (nonatomic) long long equivalencySourceAdamID;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) long long endpointType;
@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, nonatomic) BOOL usesSubscriptionLease;
@property (copy, nonatomic) id /* block */ downloadSessionAlternativeConfigurationOptionsBlock;

- (void).cxx_destruct;

@end
