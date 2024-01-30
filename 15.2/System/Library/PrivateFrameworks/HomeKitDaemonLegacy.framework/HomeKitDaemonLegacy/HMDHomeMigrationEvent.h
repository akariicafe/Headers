@class NSString, NSDictionary;

@interface HMDHomeMigrationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *reason;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 reason:(id)a1;

@end
