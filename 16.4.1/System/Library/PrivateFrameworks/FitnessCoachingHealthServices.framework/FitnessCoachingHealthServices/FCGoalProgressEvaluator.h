@interface FCGoalProgressEvaluator : NSObject

+ (BOOL)_eventDidCrossScheduledThreshold:(id)a0 withModel:(id)a1 evaluationDelegate:(id)a2;
+ (id)nextScheduledDatesByEventIdentifiersForEvents:(id)a0 model:(id)a1 evaluationDelegate:(id)a2;
+ (id)_nextFireDateForEvent:(id)a0 model:(id)a1;
+ (id)evaluateEvents:(id)a0 withModel:(id)a1 evaluationDelegate:(id)a2;

@end
