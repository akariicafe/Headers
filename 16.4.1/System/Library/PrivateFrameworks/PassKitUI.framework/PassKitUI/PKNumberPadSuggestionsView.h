@class NSArray, UIColor;
@protocol PKNumberPadSuggestionsViewDelegate;

@interface PKNumberPadSuggestionsView : UIStackView {
    NSArray *_suggestionButtons;
    unsigned char _batchedUpdateCount;
    BOOL _needsReload;
    BOOL _needsUpdate;
}

@property (weak, nonatomic) id<PKNumberPadSuggestionsViewDelegate> delegate;
@property (copy, nonatomic) NSArray *suggestions;
@property (copy, nonatomic) UIColor *buttonTextColor;
@property (copy, nonatomic) UIColor *buttonBackgroundColor;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateButtons;
- (void).cxx_destruct;
- (void)_reloadSubviews;
- (id)_createBorderedButtonForSuggestion:(id)a0 withBorder:(unsigned long long)a1 primaryAction:(id)a2;
- (void)_selectedSuggestion:(id)a0;
- (id)initWithDefaultFrame;

@end
