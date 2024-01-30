@class NSArray;

@interface CPAnalyticsCompoundEventMatcher : CPAnalyticsEventMatcher

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *subEventMatchers;

+ (id)andEventMatcherWithSubEventMatchers:(id)a0;
+ (id)orEventMatcherWithSubEventMatchers:(id)a0;
+ (id)notEventMatcherWithSubEventMatcher:(id)a0;

- (BOOL)doesMatch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)a0 subEventMatchers:(id)a1;

@end
