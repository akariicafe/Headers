@class NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;

@interface PKNumberPadSuggestionsView : UIStackView {
    NSArray *_suggestionButtons;
}

@property (weak, nonatomic) id<PKNumberPadSuggestionsViewDelegate> delegate;
@property (copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) UIColor *buttonTextColor;
@property (copy, nonatomic) UIColor *buttonBackgroundColor;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void).cxx_destruct;
- (void)_selectedSuggestion:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithDefaultFrame;

@end
