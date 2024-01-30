@class NSString, NSXPCListener;

@interface _ATXInspectionServer : NSObject <_ATXInspectionInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)getAppUsageDataFromStartDate:(id)a0 reply:(id /* block */)a1;
- (void)appAndActionHistoryClear:(id /* block */)a0;
- (id)init;
- (void)appInstallHistoryStopDeltaRecording:(id /* block */)a0;
- (void)clearBlendingSuggestionsForClientModel:(long long)a0 withReply:(id /* block */)a1;
- (void).cxx_destruct;
- (void)trainMagicalMomentsAppPredictor:(id /* block */)a0;
- (void)blendedSuggestionsForConsumerSubType:(unsigned char)a0 reply:(id /* block */)a1;
- (void)rankAndReturnInfoPredictionsInString:(id /* block */)a0;
- (void)feedbackClear:(id /* block */)a0;
- (void)widgetBundleIdentifiersForAllInfoSuggestionsInString:(id /* block */)a0;
- (void)predictAppsAndReturnInputsAndSubscores:(id /* block */)a0;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)retrainActionHistograms:(id /* block */)a0;
- (void)categoriesWithShouldUseDefault:(BOOL)a0 reply:(id /* block */)a1;
- (void)appInstallHistoryClear:(id /* block */)a0;
- (void)promoteSuggestionsFromClientModel:(id)a0 reply:(id /* block */)a1;
- (void)appInstallHistoryStartDeltaRecording:(id /* block */)a0;
- (void)scheduledPredictionsForAnchorModelWithReply:(id /* block */)a0;
- (void)getCurrentMode:(id /* block */)a0;
- (void)trainAnchorModel:(id /* block */)a0;
- (void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 consumerSubType:(unsigned char)a2 reply:(id /* block */)a3;
- (void)appIntentHistoryMockIntentLaunch:(id)a0 source:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 reply:(id /* block */)a5;
- (void)appHistoryClearAppIntent:(id /* block */)a0;
- (void)appHistoryStopDeltaRecording:(id /* block */)a0;
- (void)dumpPredictionTableForMMExpert:(id)a0 reply:(id /* block */)a1;
- (void)getActionLogs:(id /* block */)a0;
- (void)evaluateInfoSuggestionsWithCompletionHandler:(id /* block */)a0;
- (void)processSpotlightFeedbackWithReply:(id /* block */)a0;
- (void)appLaunchInformationWithReply:(id /* block */)a0;
- (void)feedbackLaunched:(id)a0 rejected:(id)a1 reply:(id /* block */)a2;
- (void)appInstallHistorySet:(id)a0 date:(id)a1 reply:(id /* block */)a2;
- (void)appHistoryActionWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)processHomeScreenFeedbackWithReply:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resetNotificationsHistory:(id /* block */)a0;
- (void)refreshBlendingLayer:(id /* block */)a0;
- (void)feedbackLaunchedWithConsumerSubType:(unsigned char)a0 forBundleId:(id)a1 rejected:(id)a2 reply:(id /* block */)a3;
- (void)schedulePredictionsForAnchorModel:(id)a0 anchorType:(id)a1 reply:(id /* block */)a2;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)appHistoryAddLaunch:(id)a0 launchReason:(id)a1 date:(id)a2 timeZone:(id)a3 reply:(id /* block */)a4;
- (void)getPredictionModelDetailsForConsumerSubType:(unsigned char)a0 reply:(id /* block */)a1;
- (void)benchmarkAppPrediction:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)appHistoryStartDeltaRecording:(id /* block */)a0;
- (void)getParseTreeForConsumerSubType:(unsigned char)a0 reply:(id /* block */)a1;
- (void)resetNotificationsSuggestionResponses:(id /* block */)a0;
- (void)appHistoryUpdateActionPredictionPipelineWithAction:(id)a0 date:(id)a1 timeZone:(id)a2 reply:(id /* block */)a3;
- (void)getNotificationSettings:(id /* block */)a0;
- (void)resetActionPredictions:(id /* block */)a0;
- (void)forceMagicalMomentsAppPredictionForBundleId:(id)a0 expert:(id)a1 reply:(id /* block */)a2;
- (void)performHomeScreenCoreAnalyticsDryRunWithCustomStartDate:(id)a0 reply:(id /* block */)a1;
- (void)benchmarkAppPredictionForConsumerSubType:(unsigned char)a0 ntimes:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)appIntentHistoryDonateINIntent:(id)a0 intentType:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 reply:(id /* block */)a5;
- (void)getInfoSuggestionsInString:(id /* block */)a0;
- (void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIds:(id)a2 candidateActiontypes:(id)a3 reply:(id /* block */)a4;
- (void)getAppFeedbackData:(id /* block */)a0;
- (void)updateAppDirectoryCache:(id /* block */)a0;
- (void)getNotificationLogs:(id /* block */)a0;
- (void)validPredictionsRightNowForAnchorModelWithReply:(id /* block */)a0;
- (void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)a0 candidateActiontypes:(id)a1 consumerSubType:(unsigned char)a2 reply:(id /* block */)a3;
- (void)createAppPredictionLogs:(id /* block */)a0;
- (void)categoryLaunchInformationWithReply:(id /* block */)a0;
- (void)appHistoryAddAppIntentLaunch:(id)a0 intent:(id)a1 source:(id)a2 date:(id)a3 timeZone:(id)a4 reply:(id /* block */)a5;
- (void)getNotificationsSuggestionResponses:(id /* block */)a0;
- (void)getInfoPredictionsInString:(id /* block */)a0;
- (void)donateSuggestion:(id)a0 forClientModel:(long long)a1 withReply:(id /* block */)a2;
- (void)appHistoryAddNSUALaunch:(id)a0 requiredString:(id)a1 itemIdentifier:(id)a2 date:(id)a3 timeZone:(id)a4 reply:(id /* block */)a5;
- (void)buildAnchorModelTrainingDataset:(id /* block */)a0;
- (void)retrainActionSlotDatabase:(id /* block */)a0;

@end
