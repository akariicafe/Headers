@interface PKSpendingSummaryGenerator : NSObject

+ (id)generateSummaryOfType:(unsigned long long)a0 startingAt:(id)a1 withSegmentLimit:(unsigned long long)a2;
+ (id)generateSummaryOfType:(unsigned long long)a0 startingAt:(id)a1 withSegmentLimit:(unsigned long long)a2 generateBeyondCurrentDay:(BOOL)a3;

@end
