@interface ATXGlobalAppScoresUtil : NSObject

+ (id)loadCoreMLModelWithName:(id)a0;
+ (int)locationTypeIndexFromRTLocationOfInterestType:(long long)a0;
+ (id)getContextKeyForTimeOfDayIndex:(int)a0 dayOfWeekIndex:(int)a1 locationIndex:(int)a2 bundleIdIndex:(int)a3;
+ (id)initializeTrieAtPath:(id)a0;
+ (int)dayOfWeekIndexFromDate:(id)a0;
+ (int)timeOfDayIndexFromDate:(id)a0;
+ (id)normalizeValues:(id)a0;

@end
