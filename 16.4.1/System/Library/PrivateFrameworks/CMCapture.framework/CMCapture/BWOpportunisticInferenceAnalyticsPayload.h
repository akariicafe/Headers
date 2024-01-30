@class NSString;

@interface BWOpportunisticInferenceAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) long long totalInferenceExecutionTime;
@property (nonatomic) long long inferenceDeadlineOverdue;
@property (nonatomic) unsigned int facesProcessedCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
