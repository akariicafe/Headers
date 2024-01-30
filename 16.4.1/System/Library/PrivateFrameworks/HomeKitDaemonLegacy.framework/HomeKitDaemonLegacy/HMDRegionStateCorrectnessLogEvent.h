@class NSString, NSDictionary;

@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) BOOL firstAccessoryReachable;
@property (readonly) BOOL regionStateAtHome;
@property (readonly) BOOL regionStateNearByHome;
@property (readonly) BOOL regionStateUnknown;
@property (readonly) BOOL isStateCorrect;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(unsigned long long)a0 firstAccessoryReachable:(BOOL)a1 regionStateAtHome:(long long)a2 regionStateNearByHome:(long long)a3 isStateCorrect:(BOOL)a4;

@end
