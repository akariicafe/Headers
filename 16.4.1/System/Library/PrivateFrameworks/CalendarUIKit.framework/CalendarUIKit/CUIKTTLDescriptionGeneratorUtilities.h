@interface CUIKTTLDescriptionGeneratorUtilities : NSObject

+ (id)descriptionForType:(unsigned long long)a0;
+ (BOOL)ttlDescriptionShouldIncludeTrafficForHypothesis:(id)a0;
+ (BOOL)ttlDescriptionShouldIncludeTrafficForHypothesisThatSupportsLiveTraffic:(BOOL)a0 transportType:(int)a1 eta:(double)a2;
+ (unsigned long long)ttlDescriptionTypeForDate:(id)a0 hypothesis:(id)a1;

@end
