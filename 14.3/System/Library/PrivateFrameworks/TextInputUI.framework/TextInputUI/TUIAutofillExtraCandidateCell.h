@class UILabel, TIKeyboardCandidate;

@interface TUIAutofillExtraCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (id)attributedStringForIcon:(id)a0 text:(id)a1 font:(id)a2 color:(id)a3;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)commonInit;
- (void)updateLabel;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(id)a0;

@end
