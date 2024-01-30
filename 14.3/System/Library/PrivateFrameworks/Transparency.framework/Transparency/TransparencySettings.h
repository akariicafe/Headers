@class NSDictionary;

@interface TransparencySettings : NSObject

@property (retain) NSDictionary *settings;

+ (BOOL)allowsInternalSecurityPolicies;
+ (double)defaultNetworkTimeout;
+ (BOOL)getBool:(id)a0;
+ (id)deviceUserAgent;
+ (double)defaultQueryCacheTimeout;

- (void).cxx_destruct;

@end
