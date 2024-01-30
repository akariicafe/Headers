@class NSDictionary;

@interface TransparencySettings : NSObject

@property (retain) NSDictionary *settings;

+ (unsigned long long)getEnvironment;
+ (id)deviceUserAgent;
+ (id)getIMEnvironmentName;
+ (double)defaultQueryCacheTimeout;
+ (double)defaultNetworkTimeout;
+ (BOOL)isAccountsInQA;
+ (BOOL)getBool:(id)a0;
+ (BOOL)allowsInternalSecurityPolicies;

- (void).cxx_destruct;

@end
