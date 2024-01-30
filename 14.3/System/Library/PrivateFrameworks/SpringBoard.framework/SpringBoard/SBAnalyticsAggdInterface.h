@interface SBAnalyticsAggdInterface : NSObject

+ (id)sharedInstance;

- (void)setValue:(long long)a0 forScalarKey:(id)a1;
- (void)addValue:(long long)a0 forScalarKey:(id)a1;

@end
