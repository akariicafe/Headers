@class NSString, NSNumber;

@interface SSPrivacyMetricsEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *acknowledgmentIdentifier;
@property (retain, nonatomic) NSNumber *acknowledgmentVersion;
@property (nonatomic) BOOL acknowledged;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL displayed;

- (id)init;

@end
