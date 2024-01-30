@class ATXHeroAppPrediction, UITapGestureRecognizer;

@interface APUIAppClipView : APUISuggestionView {
    ATXHeroAppPrediction *_prediction;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void).cxx_destruct;
- (void)_tapRecognized:(id)a0;
- (void)layoutSuggestion:(id)a0;
- (void)openPredictionAction;

@end
