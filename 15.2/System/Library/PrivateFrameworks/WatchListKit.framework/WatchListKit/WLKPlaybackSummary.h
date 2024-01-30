@class NSString, NSNumber, NSDate;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isAlwaysLive;
@property (nonatomic) BOOL isTimerDerived;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *currentPlaybackDate;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *elapsedTime;
@property (readonly, nonatomic) NSNumber *featureDuration;
@property (readonly, nonatomic) NSNumber *featureElapsedTime;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSNumber *accountIDAsNumber;
@property (readonly, nonatomic) NSString *externalProfileID;
@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) NSNumber *playbackRate;
@property (readonly, nonatomic) long long completionState;
@property (readonly, nonatomic) long long playbackType;

+ (id)debugStringForCompletionState:(long long)a0;
+ (long long)completionStateForDuration:(double)a0 elapsedTime:(double)a1;
+ (id)liveSummaryWithBundleID:(id)a0 channelID:(id)a1 serviceID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 playbackState:(long long)a6 playbackRate:(id)a7 currentPlaybackDate:(id)a8;
+ (id)_debugStringForPlaybackType:(long long)a0;
+ (id)debugStringForPlaybackState:(long long)a0;
+ (id)VODSummaryWithBundleID:(id)a0 channelID:(id)a1 contentID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 duration:(id)a6 elapsedTime:(id)a7 featureDuration:(id)a8 featureElapsedTime:(id)a9 playbackState:(long long)a10 playbackRate:(id)a11 completionState:(long long)a12;
+ (double)playedThresholdTimeForDuration:(double)a0;
+ (id)EBSSummaryWithBundleID:(id)a0 channelID:(id)a1 contentID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 playbackState:(long long)a6 playbackRate:(id)a7 currentPlaybackDate:(id)a8;
+ (id)VODSummaryWithBundleID:(id)a0 channelID:(id)a1 contentID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 duration:(id)a6 elapsedTime:(id)a7 playbackState:(long long)a8 playbackRate:(id)a9 completionState:(long long)a10;

- (id)JSONRepresentation;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_validate:(id)a0 identifier:(id)a1 expectedClass:(Class)a2;
- (BOOL)_compareOptionalTemporalValue:(id)a0 with:(id)a1 fuzzy:(BOOL)a2;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)a0 timerDerived:(BOOL)a1;
- (id)initWithBundleID:(id)a0 timestamp:(id)a1 duration:(id)a2 elapsedTime:(id)a3 featureDuration:(id)a4 featureElapsedTime:(id)a5 externalProfileID:(id)a6 contentID:(id)a7 accountID:(id)a8 playbackState:(long long)a9 playbackRate:(id)a10 completionState:(long long)a11 isAlwaysLive:(BOOL)a12 serviceID:(id)a13 currentPlaybackDate:(id)a14 playbackType:(long long)a15 isTimerDerived:(BOOL)a16 channelID:(id)a17;
- (BOOL)isEqualToSummary:(id)a0;
- (id)description;
- (BOOL)isEquivalentToSummaryExcludingCursor:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_compareOptional:(id)a0 with:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)resolveChannelID:(id /* block */)a0;
- (BOOL)isSameContent:(id)a0;
- (id)initWithMediaRemoteDictionary:(id)a0 bundleID:(id)a1 accountID:(id)a2;
- (id)sanitizedCopy;
- (BOOL)isEquivalentToSummaryExcludingTimestamp:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isValid;
- (BOOL)isLiveType;
- (id)dictionaryRepresentation;

@end
