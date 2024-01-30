@class NTPBSession, NSDictionary;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>

@property (readonly, copy, nonatomic) NTPBSession *session;
@property (readonly, copy, nonatomic) NSDictionary *requestQueryParameters;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSession:(id)a0 requestQueryParameters:(id)a1;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)a0;

@end
