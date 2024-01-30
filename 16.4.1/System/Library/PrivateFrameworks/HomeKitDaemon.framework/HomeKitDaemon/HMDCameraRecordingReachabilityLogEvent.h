@class NSString, HMDAccessoryVersion, NSDictionary;

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) BOOL reachable;
@property (readonly) BOOL didCreateEventModel;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) double offlineDuration;
@property (readonly) HMDAccessoryVersion *firmwareVersion;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithReachability:(BOOL)a0 didCreateEventModel:(BOOL)a1 reachabilityChangeDebounceCount:(unsigned long long)a2 offlineDuration:(double)a3 hapAccessory:(id)a4;

@end
