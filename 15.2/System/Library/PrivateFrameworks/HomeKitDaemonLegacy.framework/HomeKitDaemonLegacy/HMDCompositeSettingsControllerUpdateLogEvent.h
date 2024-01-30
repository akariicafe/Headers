@class NSString, NSDictionary;

@interface HMDCompositeSettingsControllerUpdateLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString *_keyPath;
}

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 date:(id)a1;
- (id)dictionaryRepresentation;

@end
