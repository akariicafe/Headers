@interface VUIPostPlayUpsellConfig : NSObject

@property (nonatomic) BOOL isUpsellOnPlaybackExitDisabled;
@property (nonatomic) BOOL isUpsellOnPIPPlaybackExitEnabled;
@property (nonatomic) double minPlaybackProgressPercentage;
@property (nonatomic) BOOL isUpsellLimitedPerShow;
@property (nonatomic) unsigned long long upsellMaxCountPerShow;
@property (nonatomic) double upsellCountDurationPerShow;
@property (nonatomic) BOOL isUpsellLimitedPerChannel;
@property (nonatomic) unsigned long long upsellMaxCountPerChannel;
@property (nonatomic) double upsellCountDurationPerChannel;

+ (id)sharedInstance;

- (id)_cleanupHistory:(id)a0 atCurrentDate:(id)a1 isShow:(BOOL)a2;
- (BOOL)_isFullScreenPlaybackUIShown;
- (BOOL)_isHistoryArrayFull:(id)a0 forMaxCount:(unsigned long long)a1 inDurationWindow:(double)a2;
- (void)_recordUpsellHistoryForShowId:(id)a0 onChannelId:(id)a1;
- (id)_trimHistoryArray:(id)a0 forMaxCount:(unsigned long long)a1 inDurationWindow:(double)a2 atCurrentDate:(id)a3;
- (BOOL)canShowUpsellForMediaItem:(id)a0 withElapsedTime:(double)a1;
- (void)configureUsingDictionary:(id)a0;
- (void)disableUpsellOnPlaybackExit:(BOOL)a0;
- (void)enableUpsellOnPIPPlaybackExit:(BOOL)a0;
- (void)setChannelLevelUpsellRateOfMaxCount:(unsigned long long)a0 inHours:(double)a1;
- (void)setMinPlaybackProgressPercentageForUpsellOnExit:(double)a0;
- (void)setShowLevelUpsellRateOfMaxCount:(unsigned long long)a0 inHours:(double)a1;

@end
