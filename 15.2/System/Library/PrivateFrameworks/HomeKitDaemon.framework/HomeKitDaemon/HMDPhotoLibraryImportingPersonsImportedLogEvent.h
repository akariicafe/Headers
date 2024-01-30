@class NSString, NSDictionary;

@interface HMDPhotoLibraryImportingPersonsImportedLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) long long totalNumberOfImportedPersons;
@property (readonly) long long numberOfNamedImportedPersons;


@end
