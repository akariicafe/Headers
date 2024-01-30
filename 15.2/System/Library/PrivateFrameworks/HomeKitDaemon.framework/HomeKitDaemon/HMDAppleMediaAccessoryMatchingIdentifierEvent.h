@class NSNumber, NSString, NSDictionary;

@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSNumber *matchingIdentifiersCount;
@property (readonly, copy) NSNumber *expectedRemovalCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithMatchingIdentifiersCount:(long long)a0;

@end
