@class NSString;

@interface HealthAppServices.HAServicesDefines : NSObject

@property (class, nonatomic, readonly) NSString *internalHealthAppURLScheme;
@property (class, nonatomic, readonly) NSString *externalHealthAppURLScheme;
@property (class, nonatomic, readonly) NSString *externalHealthAppURLHost;
@property (class, nonatomic, readonly) NSString *dataTypeDetailHostName;
@property (class, nonatomic, readonly) NSString *healthTrendsHostName;
@property (class, nonatomic, readonly) NSString *sampleTypeHostName;
@property (class, nonatomic, readonly) NSString *sharingOverviewHostName;
@property (class, nonatomic, readonly) NSString *queryParameterNameDate;
@property (class, nonatomic, readonly) NSString *queryParameterNameStartDate;
@property (class, nonatomic, readonly) NSString *queryParameterNameEndDate;
@property (class, nonatomic, readonly) NSString *queryParameterNameDataTypeCode;
@property (class, nonatomic, readonly) NSString *queryParameterNameTrendOverlay;

- (id)init;
- (void).cxx_destruct;

@end
