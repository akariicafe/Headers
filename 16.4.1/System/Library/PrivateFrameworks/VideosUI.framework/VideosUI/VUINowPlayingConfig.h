@class NSArray, NSDictionary;

@interface VUINowPlayingConfig : NSObject

@property (nonatomic) BOOL showsLozengeForLivePlayback;
@property (nonatomic) BOOL showsUpNextInHUDForVOD;
@property (nonatomic) BOOL showsUpNextInHUDForLive;
@property (nonatomic) BOOL refetchesUpNextDataForVOD;
@property (nonatomic) BOOL refetchesUpNextDataForLive;
@property (nonatomic) BOOL showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;
@property (copy, nonatomic) NSArray *mediaCharacteristicsToLocalize;
@property (copy, nonatomic) NSDictionary *mediaLocalizationKeyMapping;
@property (nonatomic) double liveSportsStartFromBeginningOffset;
@property (nonatomic) BOOL shouldSendLiveStreamStartAndEndTimesToAVKit;
@property (nonatomic) BOOL shouldAdjustLiveStreamStartTimeToMatchSeekableRangeStartTime;
@property (nonatomic) BOOL shouldAdjustLiveStreamEndTimeToMatchSeekableRangeEndTime;
@property (nonatomic) double liveStreamStartTimeAdjustmentSlopFactor;
@property (nonatomic) double liveStreamStartAndEndTimeBadMetadataCutoff;
@property (nonatomic) double liveStreamOverrunExtension;

- (id)init;
- (void).cxx_destruct;

@end
