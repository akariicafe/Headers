@class NSString, NSDictionary, WKWebsiteDataStore, WKWebpagePreferences;

@interface _WKWebsitePolicies : NSObject {
    struct RetainPtr<WKWebpagePreferences> { void *m_ptr; } _webpagePreferences;
}

@property (readonly, nonatomic) WKWebpagePreferences *webpagePreferences;
@property (nonatomic) BOOL contentBlockersEnabled;
@property (nonatomic) unsigned long long allowedAutoplayQuirks;
@property (nonatomic) long long autoplayPolicy;
@property (copy, nonatomic) NSDictionary *customHeaderFields;
@property (nonatomic) unsigned long long popUpPolicy;
@property (retain, nonatomic) WKWebsiteDataStore *websiteDataStore;
@property (copy, nonatomic) NSString *customUserAgent;
@property (copy, nonatomic) NSString *customUserAgentAsSiteSpecificQuirks;
@property (copy, nonatomic) NSString *customNavigatorPlatform;
@property (nonatomic) unsigned long long deviceOrientationAndMotionAccessPolicy;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (struct Object { void /* function */ **x0; id x1; } *)_apiObject;

@end
