@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;

- (id)initWithCoreConfiguration:(id)a0;
- (id)searchBaseURLForConfiguration;
- (id)CAPIBaseURL;
- (id)fairPlayBaseURL;
- (void).cxx_destruct;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)newsletterBaseURL;
- (id)notificationsBaseURL;

@end
