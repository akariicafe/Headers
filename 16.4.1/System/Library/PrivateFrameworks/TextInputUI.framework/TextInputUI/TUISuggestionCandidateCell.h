@class UILayoutGuide, UIImageView, TIKeyboardCandidate, UILabel, NSLayoutConstraint;

@interface TUISuggestionCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILayoutGuide *paddedContainer;
@property (retain, nonatomic) UILayoutGuide *centeredContainer;
@property (retain, nonatomic) NSLayoutConstraint *paddingBetweenConstraint;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leftPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *rightPaddingConstraint;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)a0;
- (id)bodyText;
- (void)didMoveToWindow;
- (void)commonInit;
- (void)updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)headerText;
- (void)layoutSubviews;
- (id)image;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;
- (id)textSuggestion;

@end
