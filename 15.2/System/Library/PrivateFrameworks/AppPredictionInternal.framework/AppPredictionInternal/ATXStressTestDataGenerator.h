@interface ATXStressTestDataGenerator : NSObject

- (void)clearDataForBehavioralActionPredictions;
- (void)generateDataForBehavioralActionPredictions;
- (void)clearAllDataForStressCycler;
- (void)seedAllDataForStressCycler;
- (void)setupForStressCyclerWithCompletion:(id /* block */)a0;
- (void)clearAllDataForStressCyclerWithCompletion:(id /* block */)a0;
- (void)_updateDonationPipelineWithIntentsAndNSUAs;
- (void)_updateActionFeedbackWithConfirmsAndRejects;
- (void)enumerateSampleIntentAndUserActivityEventsWithBlock:(id /* block */)a0;
- (void)enumerateSampleIntentAndUserActivityATXActionsWithBlock:(id /* block */)a0;
- (id)_visitWebpageNSUAForURLString:(id)a0;
- (id)_startCallIntentWithRecipientName:(id)a0;

@end
