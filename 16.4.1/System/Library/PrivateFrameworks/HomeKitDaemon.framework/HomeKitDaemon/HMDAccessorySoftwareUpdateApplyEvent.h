@class NSString, NSDictionary, HMDAccessoryMetricVendorDetails, HMFSoftwareVersion;

@interface HMDAccessorySoftwareUpdateApplyEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) HMDAccessoryMetricVendorDetails *metricVendorDetails;
@property (readonly, nonatomic) HMFSoftwareVersion *stagedVersion;
@property (readonly, nonatomic) unsigned long long advertisedDuration;
@property (readonly, nonatomic) unsigned long long totalAllowedDuration;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithMetricVendorDetails:(id)a0 stagedVersion:(id)a1 advertisedDuration:(unsigned long long)a2 totalAllowedDuration:(unsigned long long)a3 status:(long long)a4;

- (void).cxx_destruct;
- (id)initWithDetails:(id)a0 stagedVersion:(id)a1 advertisedDuration:(unsigned long long)a2 totalAllowedDuration:(unsigned long long)a3 status:(long long)a4;

@end
