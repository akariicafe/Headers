@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter *_adapter;
}

@property (readonly, nonatomic) NSArray *trackedEvaluations;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(id)a0;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithAdapter:(id)a0 modelInfo:(id)a1;
- (void)clearTrackedMessages;
- (id)trackedEvaluations;

@end
