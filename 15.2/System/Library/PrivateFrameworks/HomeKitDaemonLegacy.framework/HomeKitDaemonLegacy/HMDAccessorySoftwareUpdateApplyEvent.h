@class NSString, NSDictionary, HMDAccessoryMetricVendorDetails, HMFSoftwareVersion;

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) HMDAccessoryMetricVendorDetails *metricVendorDetails;
@property (readonly) HMFSoftwareVersion *stagedVersion;
@property (readonly) unsigned long long advertisedDuration;
@property (readonly) unsigned long long totalAllowedDuration;
@property (readonly) long long status;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)eventWithMetricVendorDetails:(id)a0 stagedVersion:(id)a1 advertisedDuration:(unsigned long long)a2 totalAllowedDuration:(unsigned long long)a3 status:(long long)a4;

- (void).cxx_destruct;
- (id)initWithDetails:(id)a0 stagedVersion:(id)a1 advertisedDuration:(unsigned long long)a2 totalAllowedDuration:(unsigned long long)a3 status:(long long)a4;

@end
