@class UILabel, UIColor;

@interface HKPopulationNormsClassificationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *classificationLabel;
@property (nonatomic) BOOL isHighlighted;
@property (retain, nonatomic) UIColor *highlightColor;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupFonts;
- (void)setSoftHighlightState:(BOOL)a0;
- (void)setTitle:(id)a0 highlighted:(BOOL)a1;

@end
