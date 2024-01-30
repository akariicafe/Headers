@class NSDate, NSString, NSArray, NSURL, VUIExtrasInfo, NSDictionary, VUIContentMetadata, VUIRouterDataSource, NSNumber;

@interface VUIVideosPlayable : NSObject {
    NSDictionary *_videosPlayableDict;
}

@property (readonly, nonatomic) NSString *canonicalID;
@property (readonly, nonatomic) NSString *referenceID;
@property (readonly, nonatomic) NSString *showCanonicalID;
@property (readonly, nonatomic) NSString *seasonCanonicalID;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) BOOL isRental;
@property (readonly, nonatomic) NSNumber *rentalID;
@property (readonly, nonatomic) NSString *bookmarkID;
@property (readonly, nonatomic) BOOL isSubscription;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *utsEntityType;
@property (readonly, nonatomic) BOOL isMovie;
@property (readonly, nonatomic) BOOL isFamilySharingContent;
@property (readonly, nonatomic) NSURL *playbackURL;
@property (retain, nonatomic) NSURL *hlsURL;
@property (readonly, nonatomic) NSURL *downloadURL;
@property (readonly, nonatomic) NSURL *fpsCertificateURL;
@property (readonly, nonatomic) NSURL *fpsKeyServerURL;
@property (readonly, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (readonly, nonatomic) NSURL *fpsNonceURL;
@property (readonly, nonatomic) NSURL *scrubVideoURL;
@property (readonly, nonatomic) NSString *buyParams;
@property (readonly, nonatomic) NSURL *previewArtwork;
@property (readonly, nonatomic) NSNumber *resumeTime;
@property (readonly, nonatomic) NSDate *resumeTimeTimestamp;
@property (readonly, nonatomic) NSNumber *mainContentRelativeResumeTime;
@property (readonly, nonatomic) NSDate *mainContentRelativeResumeTimeTimestamp;
@property (retain, nonatomic) VUIContentMetadata *metadata;
@property (retain, nonatomic) NSDictionary *vpafMetrics;
@property (readonly, nonatomic) NSDictionary *mediaMetrics;
@property (readonly, nonatomic) NSString *liveStreamServiceID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) BOOL disableScrubbing;
@property (readonly, nonatomic) NSString *rtcServiceIdentifier;
@property (readonly, nonatomic) BOOL sendLocationToPlaybackKeyServerWhenOptedIn;
@property (readonly, nonatomic) BOOL sendMescalHeaderToPlaybackKeyServer;
@property (readonly, nonatomic) BOOL limitPlayback;
@property (readonly, nonatomic) NSArray *playbackModes;
@property (readonly, nonatomic) unsigned long long sourceRef;
@property (readonly, nonatomic) unsigned long long playableType;
@property (readonly, nonatomic) VUIExtrasInfo *extrasInfo;
@property (readonly, nonatomic) VUIRouterDataSource *upsellRouterDataSource;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) NSNumber *requiredAgeForPlayback;
@property (readonly, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (readonly, nonatomic) BOOL isiTunesPurchaseOrRental;
@property (readonly, nonatomic, getter=isSharedPurchase) BOOL sharedPurchase;
@property (readonly, nonatomic) BOOL isAmbientVideo;
@property (readonly, nonatomic) NSNumber *repeatLoopCount;
@property (readonly, nonatomic) NSURL *sharedWatchUrl;
@property (readonly, nonatomic) NSString *sharedWatchId;
@property (readonly, nonatomic) BOOL useSharedPlayableForCowatching;
@property (readonly, nonatomic) BOOL isCowatchingProhibited;
@property (readonly, nonatomic) NSString *cowatchingProhibitedReason;
@property (readonly, nonatomic) NSString *groupActivityDay;
@property (readonly, nonatomic) NSArray *knownAudioVariantIDs;

+ (id)_sharedPlayableAllowList;
+ (id)videosPlayableFromSerializedData:(id)a0;
+ (id)videosPlayableFromSerializedSharedData:(id)a0;
+ (id)videosPlayablesFromDictionaries:(id)a0 andMetadataDictionary:(id)a1;

- (id)serializedData;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 andMetadataDictionary:(id)a1;
- (BOOL)mostRecentResumeTime:(id *)a0 mostRecentTimestamp:(id *)a1;
- (id)serializedSharedData;

@end
