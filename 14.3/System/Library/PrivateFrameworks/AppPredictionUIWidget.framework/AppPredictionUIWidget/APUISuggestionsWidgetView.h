@class ATXSuggestionLayout, NSMutableArray, UIStackView;
@protocol APUISuggestionsWidgetViewDelegate;

@interface APUISuggestionsWidgetView : UIView {
    ATXSuggestionLayout *_suggestionLayout;
    unsigned long long _platterSize;
    NSMutableArray *_containerViews;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<APUISuggestionsWidgetViewDelegate> delegate;

+ (BOOL)_shouldDisplayRecentDonationsOrUpcomingMediaForTesting;
+ (id)_developerModeSuggestions:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateWithSuggestionLayout:(id)a0;
- (void)highlightSuggestion:(id)a0;
- (id)suggestionAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_setupStackViewIfNecessary;
- (void)_layout1x4WithRowCount:(unsigned long long)a0;
- (void)_layoutOne2x2;
- (void)_layoutNotSupported:(long long)a0;
- (void)_displayNoSuggestions;
- (void)logLayoutSuggestions:(id)a0;
- (void)_addFullWidthWidgetContainerViewWithSuggestion:(id)a0 withTopSeparator:(BOOL)a1;
- (void)_checkSuggestions:(id)a0 completion:(id /* block */)a1;
- (id)_addWidgetContainerViewWithSuggestion:(id)a0 toVerticalStackView:(id)a1;
- (id)_validSuggestionsWithSuggestions:(id)a0;
- (BOOL)_hasBundleInstalledAndNotRestrictedForSuggestion:(id)a0;
- (void)addSeparatorViewToView:(id)a0;
- (id)_createWidgetContainerViewWithSuggestion:(id)a0;

@end
