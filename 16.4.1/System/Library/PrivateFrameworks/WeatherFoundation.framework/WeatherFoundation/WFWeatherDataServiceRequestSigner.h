@interface WFWeatherDataServiceRequestSigner : NSObject

+ (void)signRequest:(id)a0 withSecret:(id)a1 andDate:(id)a2;
+ (id)roundDate:(id)a0 toMinutes:(unsigned long long)a1;
+ (void)signRequest:(id)a0 withDate:(id)a1;
+ (id)buildAuthHeader:(id)a0 withSecret:(id)a1 andDate:(id)a2;

@end
