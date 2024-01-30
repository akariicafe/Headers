@class NSString, NSArray, NSDictionary, NSNumber;

@interface HMDMediaPlaybackActionEvent : HMMLogEvent <HMDBiomeLogEvent, HMDMicroLocationLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isPlaybackArchivePresent;
@property (readonly, copy) NSNumber *playbackStateNumber;
@property (readonly, copy) NSNumber *volumeNumber;
@property (readonly, copy) NSNumber *sourceNumber;
@property (readonly, copy) NSString *sourceClientName;
@property (readonly, copy) NSString *clientMetricIdentifier;
@property (readonly) unsigned long long numberOfMediaProfiles;
@property (readonly, copy) NSArray *accessories;
@property (readonly, nonatomic) unsigned long long numAccessoriesInHome;
@property (readonly, nonatomic) unsigned long long numNonEmptyScenesInHome;
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, copy) NSString *sourceString;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithIsPlaybackArchivePresent:(BOOL)a0 playbackStateNumber:(id)a1 volumeNumber:(id)a2 sourceNumber:(id)a3 sourceClientName:(id)a4 accessories:(id)a5;
- (id)microLocationMetadataForLogEventObserver:(id)a0;
- (unsigned long long)microLocationScanTriggerTypeForLogEventObserver:(id)a0;
- (BOOL)shouldTriggerMicroLocationLocalizationScanForLogEventObserver:(id)a0;
- (BOOL)shouldTriggerMicroLocationRecordingScanForLogEventObserver:(id)a0;

@end
