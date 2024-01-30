@class NSArray;

@interface HealthPlatformCore.DateRangeRelevanceProviderManager : RERelevanceProviderManager

@property (class, nonatomic, readonly) NSArray *_features;

+ (Class)_relevanceProviderClass;

- (id)initWithQueue:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;

@end
