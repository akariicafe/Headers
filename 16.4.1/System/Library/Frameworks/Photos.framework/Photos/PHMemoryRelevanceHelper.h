@interface PHMemoryRelevanceHelper : NSObject

+ (BOOL)isMemory:(id)a0 proactiveWorthyAtDate:(id)a1;
+ (double)relevanceScoreForMemory:(id)a0 atDate:(id)a1;
+ (double)_categoryWeightForMemory:(id)a0;
+ (BOOL)_isDate:(id)a0 inSameDayAndMonthAsDate:(id)a1;
+ (BOOL)_isMemoryCategoryTemporal:(unsigned long long)a0;
+ (BOOL)_isMemorySubcategoryTemporal:(unsigned long long)a0;
+ (BOOL)_isMemoryTemporal:(id)a0;
+ (double)_notificationLevelWeightForMemory:(id)a0;
+ (double)_subcategoryWeightForMemory:(id)a0;
+ (BOOL)isMemory:(id)a0 relevantAtDate:(id)a1;

@end
