@class NSString, NSArray, NSDictionary, ICStorePlatformMetadata, NSDate, ICStoreHLSAssetInfo;

@interface ICRadioStationTrack : NSObject {
    NSDictionary *_responseDictionary;
    long long _responseVersion;
}

@property (readonly, nonatomic) long long storeAdamID;
@property (readonly, copy, nonatomic) ICStorePlatformMetadata *storePlatformMetadata;
@property (readonly, copy, nonatomic) NSDictionary *serverTrackInfo;
@property (readonly, copy, nonatomic) NSArray *fileAssets;
@property (readonly, copy, nonatomic) ICStoreHLSAssetInfo *hlsAsset;
@property (readonly, copy, nonatomic) NSArray *radioStreamAssets;
@property (readonly, nonatomic) long long likeState;
@property (readonly, nonatomic, getter=isSkippable) BOOL skippable;
@property (readonly, nonatomic) long long trackType;
@property (readonly, nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) double startTime;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) ICRadioStationTrack *beforePromoContentTrack;
@property (readonly, nonatomic) ICRadioStationTrack *afterPromoContentTrack;
@property (readonly, nonatomic) ICRadioStationTrack *parentTrack;
@property (readonly, copy, nonatomic) NSString *playbackAuthorizationToken;

+ (id)flattenedTracksWithTracks:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_hlsAssetFromAssetDictionary:(id)a0;
- (id)initWithResponseDictionary:(id)a0 responseVersion:(long long)a1 expirationDate:(id)a2;

@end
