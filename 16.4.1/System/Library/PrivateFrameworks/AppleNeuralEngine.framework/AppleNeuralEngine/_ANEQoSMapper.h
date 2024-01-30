@interface _ANEQoSMapper : NSObject

+ (unsigned int)aneUserInteractiveTaskQoS;
+ (unsigned int)aneBackgroundTaskQoS;
+ (unsigned int)aneDefaultTaskQoS;
+ (unsigned int)aneRealTimeTaskQoS;
+ (unsigned int)aneUserInitiatedTaskQoS;
+ (unsigned int)aneUtilityTaskQoS;
+ (id)dispatchQueueArrayByMappingPrioritiesWithTag:(id)a0;
+ (int)programPriorityForQoS:(unsigned int)a0;
+ (unsigned int)qosForProgramPriority:(int)a0;
+ (unsigned long long)queueIndexForQoS:(unsigned int)a0;
+ (int)realTimeProgramPriority;
+ (unsigned long long)realTimeQueueIndex;

@end
