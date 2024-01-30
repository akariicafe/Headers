@class NSString, HMDAccessoryVersion;

@interface HMDCameraRecordingReachabilityLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging>

@property (readonly) BOOL reachable;
@property (readonly) BOOL didCreateEventModel;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) double offlineDuration;
@property (readonly) HMDAccessoryVersion *firmwareVersion;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;

+ (id)uuid;

- (id)eventName;
- (void).cxx_destruct;
- (id)serializedEvent;
- (id)initWithReachability:(BOOL)a0 didCreateEventModel:(BOOL)a1 reachabilityChangeDebounceCount:(unsigned long long)a2 offlineDuration:(double)a3 hapAccessory:(id)a4;

@end
