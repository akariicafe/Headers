@interface SHInsightsError : NSObject

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 keyOverrides:(id)a2;
+ (id)messageForCode:(long long)a0;

@end
