@interface ATXMediaActionPrediction : NSObject

+ (id)getAllUpcomingMedia;
+ (id)getUpcomingMediaForBundle:(id)a0 isInternalApplication:(BOOL)a1;
+ (id)resolvePlayMediaIntent:(id)a0 withUpcomingMedia:(id)a1;
+ (BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)a0 withINUpcomingMediaManagerReturnValueForTests:(id)a1;
+ (BOOL)upcomingMediaPreferenceForINPlayMediaIntent:(id)a0;
+ (id)resolveBucketLevelPrediction:(id)a0 withUpcomingMedia:(id)a1;
+ (id)resolveContainerLevelPrediction:(id)a0 withUpcomingMedia:(id)a1;
+ (id)resolveItemLevelPrediction:(id)a0 withUpcomingMedia:(id)a1;
+ (id)findTopRankedINPlayMediaIntentFromArray:(id)a0;
+ (id)updatePlayMediaActionPredictions:(id)a0 withUpcomingMedia:(id)a1 forActionKey:(id)a2 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a3 appActionLogProbability:(double)a4 statistics:(id)a5;

@end
