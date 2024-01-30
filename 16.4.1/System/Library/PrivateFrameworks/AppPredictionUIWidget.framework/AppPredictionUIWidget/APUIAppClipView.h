@class UITapGestureRecognizer, ATXHeroData;

@interface APUIAppClipView : APUISuggestionView {
    ATXHeroData *_prediction;
    UITapGestureRecognizer *_tapRecognizer;
}

- (void)_tapRecognized:(id)a0;
- (void).cxx_destruct;
- (void)layoutSuggestion:(id)a0;
- (void)openPredictionAction;

@end
