@class UILabel, TIKeyboardCandidateSuggestion;

@interface TUISuggestionCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TIKeyboardCandidateSuggestion *candidate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)commonInit;
- (void)updateLabel;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(id)a0;

@end
