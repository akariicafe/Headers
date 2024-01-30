@class NTPBSession, NSDictionary;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent>

@property (readonly, copy, nonatomic) NTPBSession *session;
@property (readonly, copy, nonatomic) NSDictionary *requestQueryParameters;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)requestMetadataWithExternalAnalyticsIdentifier:(id)a0;
- (id)initWithSession:(id)a0 requestQueryParameters:(id)a1;

@end
