@interface CAMEffectFilterManager : NSObject

+ (id)aggdNameForType:(long long)a0;
+ (id)displayNameForType:(long long)a0;
+ (id)ciFilterNameForFilterType:(long long)a0 lightingType:(long long)a1;
+ (id)ciFilterNameForFilterType:(long long)a0;
+ (id)filtersForFilterType:(long long)a0 lightingType:(long long)a1 applyDepthEffect:(BOOL)a2;

@end
