@class TIKeyboardCandidate, UIView;

@interface TUIProactiveCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UIView *slotContentView;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
