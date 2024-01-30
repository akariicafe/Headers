@interface AMDJSEngagementEventHandler : NSObject

+ (id)handleSingleEngagementEvent:(id)a0 forEventType:(long long)a1 forUserId:(id)a2 andStoreFrontId:(unsigned int)a3 error:(id *)a4;
+ (unsigned int)saveLaunchEvents:(id)a0 error:(id *)a1;
+ (id)handleAggregatedEngagementEvent:(id)a0 forEventType:(long long)a1 forUserId:(id)a2 andStoreFrontId:(unsigned int)a3 error:(id *)a4;

@end
