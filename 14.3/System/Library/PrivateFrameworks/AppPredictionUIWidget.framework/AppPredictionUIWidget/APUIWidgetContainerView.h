@class UIStackView, APUISuggestionsWidgetView, APUISuggestionView, ATXProactiveSuggestion;
@protocol APUISuggestionsWidgetViewDelegate;

@interface APUIWidgetContainerView : UIView {
    UIStackView *_stackView;
    APUISuggestionView *_suggestionView;
}

@property (readonly, nonatomic) APUISuggestionsWidgetView *suggestionsWidgetView;
@property (weak, nonatomic) id<APUISuggestionsWidgetViewDelegate> delegate;
@property (nonatomic) unsigned long long platterSize;
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)setViewPressed:(BOOL)a0;
- (void)setSuggestionViewLabelsAlpha:(double)a0;
- (void)_createStackViewIfNeeded;
- (void)setSuggestion:(id)a0 inView:(id)a1;
- (void)_setAppClipSuggestion:(id)a0;
- (void)_setAppSuggestion:(id)a0;
- (void)_setActionSuggestion:(id)a0;
- (void)_displayNoSuggestionsWithSuggestion:(id)a0;
- (void)displaySuggestion:(id)a0;

@end
