@interface CUIKEventTimeDetector : NSObject

+ (id)dateResultsFromString:(id)a0 referenceDate:(id)a1;
+ (id)resultDictionaryForString:(id)a0 referenceDate:(id)a1;
+ (id)resultDictionaryForString:(id)a0 referenceDate:(id)a1 ignoreDurationForApproximateTime:(BOOL)a2 preferTimes:(BOOL)a3;
+ (id)stripRanges:(id)a0 fromString:(id)a1;

@end
