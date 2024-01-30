@class UIColor, PKNumericSuggestion;

@interface PKNumericSuggestionButton : PKNumericBorderButton

@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) PKNumericSuggestion *suggestion;

+ (id)buttonWithSuggestion:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;

@end
