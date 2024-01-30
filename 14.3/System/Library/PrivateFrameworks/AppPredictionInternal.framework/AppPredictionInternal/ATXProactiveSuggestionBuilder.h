@interface ATXProactiveSuggestionBuilder : NSObject

+ (id)_proactiveSuggestionFromAppPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0 clientModelSpec:(id)a1 reasons:(id)a2;
+ (id)_uiSpecForAppClipWithBundleId:(id)a0 title:(id)a1 subtitle:(id)a2 predictionReason:(id)a3;
+ (id)proactiveSuggestionsForAnchorModelFromScoredActionWithReason:(id)a0 clientModelSpec:(id)a1 mediumThreshold:(double)a2 highThreshold:(double)a3;
+ (id)predictionReasonForAnchorModelPrediction:(id)a0;
+ (id)proactiveSuggestionsForAppsWithHeroAppPredictions:(id)a0 clientModelSpec:(id)a1;
+ (BOOL)_isMagicalMomentForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0;
+ (BOOL)_isInstalledAppClipForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0;
+ (id)_proactiveSuggestionsFromActionResult:(id)a0 clientModelSpec:(id)a1 reasons:(id)a2;
+ (id)_uiSpecForScoredAction:(id)a0 scoreSpec:(id)a1 clientModelSpec:(id)a2 predictionReason:(id)a3 shouldClearOnEngagement:(BOOL)a4;
+ (BOOL)_isHeuristicActionForActionResult:(id)a0;
+ (id)_uiSpecForMMAppWithBundleId:(id)a0 scoreSpec:(id)a1 predictionReason:(id)a2 anchor:(long long)a3;
+ (id)proactiveSuggestionForAppClipsFromHeroAppPredictions:(id)a0 clientModelSpec:(id)a1 mediumThreshold:(double)a2 highThreshold:(double)a3;
+ (id)_scoreSpecForAppWithScore:(double)a0 isHighConfidence:(BOOL)a1;
+ (long long)_confidenceCategoryForScore:(double)a0 highThreshold:(double)a1 mediumThreshold:(double)a2;
+ (id)proactiveSuggestionsFromAppPredictionItems:(const struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; } *)a0 clientModelSpec:(id)a1 maxSuggestionsToSendToBlendingLayer:(int)a2;
+ (id)_executableSpecForScoredAction:(id)a0 clientModelId:(id)a1;
+ (id)_uiSpecForAppWithBundleId:(id)a0 scoreSpec:(id)a1 predictionReason:(id)a2;
+ (id)_proactiveSuggestionFromMagicalMomentsPredictionBundleId:(id)a0 mmSignals:(id)a1 clientModelSpec:(id)a2 reasons:(id)a3;
+ (id)_uiSpecForScoredAction:(id)a0 scoreSpec:(id)a1 clientModelSpec:(id)a2 predictionReason:(id)a3;
+ (id)_scoreSpecForScore:(double)a0 highThreshold:(double)a1 mediumThreshold:(double)a2;
+ (id)_uiSpecForHeroAppPrediction:(id)a0 scoreSpec:(id)a1 predictionReason:(id)a2;
+ (long long)_confidenceCategoryForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0;
+ (id)proactiveSuggestionForAppClipFromHeroAppPrediction:(id)a0 clientModelSpec:(id)a1 mediumThreshold:(double)a2 highThreshold:(double)a3 reasons:(id)a4;
+ (id)_appPredictionReasonForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0 reasons:(id)a1;
+ (id)proactiveSuggestionsForAppsWithMagicalMomentsMap:(id)a0 clientModelSpec:(id)a1;
+ (id)_proactiveSuggestionFromHeroAppPrediction:(id)a0 clientModelSpec:(id)a1 reasons:(id)a2;
+ (id)_scoreSpecForAppClipWithScore:(double)a0 mediumThreshold:(double)a1 highThreshold:(double)a2;
+ (id)proactiveSuggestionsFromScoredAction:(id)a0 clientModelSpec:(id)a1 mediumThreshold:(double)a2 highThreshold:(double)a3 predictionReason:(id)a4;
+ (id)_scoreSpecForHeroAppPrediction:(id)a0;
+ (id)proactiveSuggestionForAppWithBundleId:(id)a0 score:(double)a1 clientModelSpec:(id)a2 mediumThreshold:(double)a3 highThreshold:(double)a4 predictionReason:(id)a5;
+ (long long)_confidenceCategoryGivenIsHighConfidence:(BOOL)a0;
+ (id)_actionPredictionReasonForActionResult:(id)a0 reasons:(id)a1;
+ (id)_executableSpecForAppWithBundleId:(id)a0;
+ (BOOL)isMMAnchorWhitelistedForHomeScreen:(long long)a0;
+ (BOOL)_isHeroAppForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0;
+ (id)_scoreSpecForMagicalMomentsPredictionWithMmSignals:(id)a0;
+ (id)proactiveSuggestionsFromActionResults:(id)a0 clientModelSpec:(id)a1;
+ (id)proactiveSuggestionForAppWithAnchorModelPrediction:(id)a0 clientModelSpec:(id)a1 mediumThreshold:(double)a2 highThreshold:(double)a3;
+ (id)_executableSpecForAppClipWithHeroAppPrediction:(id)a0;
+ (id)_scoreSpecForPredictionItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; })a0;

@end
