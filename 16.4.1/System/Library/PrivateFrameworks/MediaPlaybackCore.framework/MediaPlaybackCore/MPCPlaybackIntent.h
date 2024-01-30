@class NSString, NSDictionary, NSData, MPCPlaybackSharedListeningProperties, NSNumber;
@protocol MPCPlaybackIntentDataSource, NSSecureCoding;

@interface MPCPlaybackIntent : NSObject {
    id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
}

@property (readonly, nonatomic) id<MPCPlaybackIntentDataSource> tracklistDataSource;
@property (nonatomic) long long tracklistSource;
@property (retain, nonatomic) id<NSSecureCoding> tracklistToken;
@property (nonatomic) BOOL prefersEnqueuingUsingAirPlay;
@property (readonly, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;
@property (nonatomic) long long actionAfterQueueLoad;
@property (nonatomic) long long shuffleMode;
@property (nonatomic) long long repeatMode;
@property (copy, nonatomic) NSNumber *privateListeningOverride;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriAssetInfo;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;

+ (id)radioPlaybackIntentWithStation:(id)a0;
+ (id)radioPlaybackIntentFromAlbum:(id)a0;
+ (id)radioPlaybackIntentFromArtist:(id)a0;
+ (id)radioPlaybackIntentFromSong:(id)a0;
+ (void)buildSharedSessionIntentWithIntent:(id)a0 identity:(id)a1 extendedStatusCompletion:(id /* block */)a2;
+ (id)continueListeningRadioPlaybackIntent;
+ (id)intentFromModelRequest:(id)a0;
+ (id)intentFromQueueDescriptor:(id)a0;
+ (id)radioPlaybackIntentFromReference:(id)a0;
+ (id)radioPlaybackIntentWithStationStringID:(id)a0;
+ (id)radioPlaybackIntentWithStationURL:(id)a0;
+ (id)sharedSessionIntentWithProperties:(id)a0 identity:(id)a1;
+ (id)tracklistDataSourceForSource:(long long)a0;

- (void)getArchiveWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)getRemotePlaybackQueueWithDestination:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (void)getRepresentativeObjectWithProperties:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void)getRemotePlaybackQueueDataWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
