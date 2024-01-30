@class NSDictionary;

@interface ANAnalyticsContext : NSObject <ANAnalyticsPayloadProvider>

@property (nonatomic) BOOL isEndpoint;
@property (readonly) NSDictionary *analyticsPayload;

+ (id)contextWithAnnouncer:(id)a0;
+ (id)contextWithEndpointID:(id)a0;

@end
