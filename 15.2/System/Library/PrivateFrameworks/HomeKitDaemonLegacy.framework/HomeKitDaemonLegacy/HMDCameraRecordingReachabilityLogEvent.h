@class NSString, NSDictionary, HMDAccessoryVersion;

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) BOOL reachable;
@property (readonly) BOOL didCreateEventModel;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) double offlineDuration;
@property (readonly) HMDAccessoryVersion *firmwareVersion;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;


- (void).cxx_destruct;
- (id)initWithReachability:(BOOL)a0 didCreateEventModel:(BOOL)a1 reachabilityChangeDebounceCount:(unsigned long long)a2 offlineDuration:(double)a3 hapAccessory:(id)a4;

@end
