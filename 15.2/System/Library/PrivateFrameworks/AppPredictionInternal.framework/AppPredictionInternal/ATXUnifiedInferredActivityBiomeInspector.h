@interface ATXUnifiedInferredActivityBiomeInspector : NSObject

+ (id)inferredActivityStreamFromName:(id)a0;
+ (void)retrieveInferredActivitySessionsFromPublisherName:(id)a0 startTime:(double)a1 reply:(id /* block */)a2;
+ (void)retrieveInferredActivityTransitionsFromPublisherName:(id)a0 startTime:(double)a1 reply:(id /* block */)a2;

@end
