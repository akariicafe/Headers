@interface WiFiUsageLQMSample : NSObject

+ (void)initialize;
+ (id)allLQMProperties;
+ (id)featureFromFieldName:(id)a0;
+ (BOOL)isPerSecond:(id)a0;
+ (id)binLabelfromFieldName:(id)a0 value:(long long)a1;

- (id)description;
- (id)numberForKeyPath:(id)a0;

@end
