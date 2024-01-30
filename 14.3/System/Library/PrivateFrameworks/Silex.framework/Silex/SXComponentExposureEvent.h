@class NSString, NSDictionary;

@interface SXComponentExposureEvent : SXAnalyticsEvent

@property (readonly, nonatomic) NSString *componentIdentifier;
@property (readonly, nonatomic) NSString *componentType;
@property (readonly, nonatomic) NSString *componentRole;
@property (readonly, nonatomic) NSDictionary *metaData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithComponent:(id)a0;

@end
