@class NSString, NSDictionary;

@interface HMDMultiUserNewLanguageNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSString *language;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithLanugage:(id)a0;

@end
