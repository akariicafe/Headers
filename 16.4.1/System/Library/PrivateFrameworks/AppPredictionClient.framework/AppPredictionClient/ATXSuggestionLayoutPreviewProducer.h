@interface ATXSuggestionLayoutPreviewProducer : NSObject

+ (id)_clientModelSpecForPreview;
+ (id)_executableSpecForAppPredictionWithBundleId:(id)a0;
+ (id)_proactiveSuggestionWithBundleId:(id)a0 layoutType:(long long)a1 title:(id)a2;
+ (id)_scoreSpecForPreview;
+ (id)_uiSpecForPreviewWithLayoutType:(long long)a0 title:(id)a1 subtitle:(id)a2;
+ (id)previewLayoutFor2x2SuggestionWidget;
+ (id)previewLayoutFor2x4SuggestionWidget;
+ (id)previewLayoutFor4x4SuggestionWidget;
+ (id)previewLayoutForAppPredictionPanel;

@end
