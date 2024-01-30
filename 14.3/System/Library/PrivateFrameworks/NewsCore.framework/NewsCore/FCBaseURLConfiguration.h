@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;

- (void).cxx_destruct;
- (id)CAPIBaseURL;
- (id)fairPlayBaseURL;
- (id)initWithCoreConfiguration:(id)a0;
- (id)notificationsBaseURL;
- (id)newsletterBaseURL;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)searchBaseURLForConfiguration;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;

@end
