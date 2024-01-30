@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)authTokenBaseURLForConfiguration:(id)a0;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)sportsDataVisualizationBaseURLForConfiguration:(id)a0;
+ (id)appAnalyticsSportsEventsBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;

- (id)notificationsBaseURL;
- (id)initWithCoreConfiguration:(id)a0;
- (id)searchBaseURLForConfiguration;
- (id)appAnalyticsSportsEventsBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)newsletterBaseURL;
- (id)CAPIBaseURL;
- (id)sportsDataVisualizationBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)fineGrainedNewsletterSubscriptionBaseURLForConfiguration;
- (id)fairPlayBaseURL;
- (void).cxx_destruct;
- (id)authTokenBaseURLForConfiguration;

@end
