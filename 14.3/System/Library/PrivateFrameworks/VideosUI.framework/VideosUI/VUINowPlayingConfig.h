@class NSArray;

@interface VUINowPlayingConfig : NSObject

@property (nonatomic) BOOL showsLozengeForLivePlayback;
@property (nonatomic) BOOL showsStillWatchingAlert;
@property (nonatomic) double stillWatchingAlertDuration;
@property (nonatomic) double alertIdleTimeout;
@property (copy, nonatomic) NSArray *mediaTypesExcludedFromReporting;
@property (nonatomic) BOOL allowQOSReportingForiTunesLibraryPlayback;
@property (nonatomic) BOOL convertMainContentRelativeStartTimeOfZeroToAbsoluteStartTimeOfZero;

- (id)init;
- (void).cxx_destruct;

@end
