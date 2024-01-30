@class UILabel, TUICandidateLabel, TIKeyboardCandidate;

@interface TUICandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) TUICandidateLabel *textLabel;
@property (retain, nonatomic) TUICandidateLabel *alternativeTextLabel;
@property (retain, nonatomic) UILabel *candidateNumberLabel;
@property (retain, nonatomic) TUICandidateLabel *annotationTextLabel;
@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) BOOL shouldShowCandidateNumber;
@property (nonatomic) BOOL rowSelected;
@property (nonatomic) long long alignment;
@property (nonatomic) double minimumTextLabelHeight;

+ (double)widthForText:(id)a0 font:(id)a1 layoutOrientation:(long long)a2;
+ (double)widthForCandidate:(id)a0 showCandidateNumber:(BOOL)a1 style:(id)a2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)cellBackgroundColor;
- (void)commonInit;
- (void)prepareForReuse;
- (id)cellBackgroundImage;
- (BOOL)isFocused;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)updateColors;
- (void)updateStyle;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateLabels;
- (void)rotateBy90DegreesForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
- (BOOL)_canFocusProgrammatically;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setStyle:(id)a0;

@end
