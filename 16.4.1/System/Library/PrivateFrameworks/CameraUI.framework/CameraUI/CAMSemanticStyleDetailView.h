@class UILabel, NSNumberFormatter, CAMSemanticStyle;

@interface CAMSemanticStyleDetailView : UIView

@property (readonly, nonatomic) UILabel *_styleTitleLabel;
@property (readonly, nonatomic) UILabel *_styleDescriptionLabel;
@property (readonly, nonatomic) UILabel *_toneTitleLabel;
@property (readonly, nonatomic) UILabel *_warmthTitleLabel;
@property (readonly, nonatomic) UILabel *_toneValueLabel;
@property (readonly, nonatomic) UILabel *_warmthValueLabel;
@property (readonly, nonatomic) NSNumberFormatter *_integerFormatter;
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_descriptionForSemanticStylePreset:(long long)a0;
- (void)_updateTextForCurrentStyle;

@end
