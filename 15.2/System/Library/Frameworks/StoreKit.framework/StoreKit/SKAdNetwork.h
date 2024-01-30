@interface SKAdNetwork : NSObject

+ (void)updateConversionValue:(long long)a0;
+ (void)startImpression:(id)a0 completionHandler:(id /* block */)a1;
+ (void)endImpression:(id)a0 completionHandler:(id /* block */)a1;
+ (void)registerAppForAdNetworkAttribution;

@end
