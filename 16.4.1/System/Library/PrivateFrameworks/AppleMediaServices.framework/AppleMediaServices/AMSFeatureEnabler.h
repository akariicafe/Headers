@class NSHTTPCookie;

@interface AMSFeatureEnabler : NSObject

@property (class, readonly, nonatomic) NSHTTPCookie *cookie;

+ (id)_fetchEnabledFeatures;
+ (void)clear;

@end
