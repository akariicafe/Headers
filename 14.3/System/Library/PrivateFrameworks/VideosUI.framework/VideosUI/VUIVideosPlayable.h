@class NSDate, NSString, VUIExtrasInfo, NSURL, NSDictionary, VUIContentMetadata, VUIRouterDataSource, NSNumber;

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
@property (readonly, nonatomic) NSURL *hlsURL;
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
@property (readonly, nonatomic) VUIContentMetadata *metadata;
@property (readonly, nonatomic) NSDictionary *vpafMetrics;
@property (readonly, nonatomic) NSDictionary *mediaMetrics;
@property (readonly, nonatomic) NSURL *tokenServerURL;
@property (readonly, nonatomic) NSURL *stopURL;
@property (readonly, nonatomic) NSDictionary *tokenServerParams;
@property (readonly, nonatomic) NSString *liveStreamServiceID;
@property (readonly, nonatomic) NSString *externalServiceID;
@property (readonly, nonatomic) BOOL disableScrubbing;
@property (readonly, nonatomic) NSString *rtcServiceIdentifier;
@property (readonly, nonatomic) VUIExtrasInfo *extrasInfo;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) NSNumber *requiredAgeForPlayback;
@property (readonly, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (readonly, nonatomic) BOOL isiTunesPurchaseOrRental;
@property (readonly, nonatomic, getter=isSharedPurchase) BOOL sharedPurchase;
@property (readonly, nonatomic) VUIRouterDataSource *upsellRouterDataSource;
@property (readonly, nonatomic) BOOL isAmbientVideo;
@property (readonly, nonatomic) NSNumber *repeatLoopCount;

+ (id)videosPlayablesFromDictionaries:(id)a0 andMetadataDictionary:(id)a1;

- (void).cxx_destruct;
- (BOOL)mostRecentResumeTime:(id *)a0 mostRecentTimestamp:(id *)a1;
- (id)initWithDictionary:(id)a0 andMetadataDictionary:(id)a1;

@end
