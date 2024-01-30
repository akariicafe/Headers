@class NSArray, SFMagicHeadWheelView, UIView;

@interface _UIMagicHeadCollectionViewCell : UIAirDropGroupActivityCell

@property (retain, nonatomic) NSArray *regularMHConstraints;
@property (retain, nonatomic) NSArray *largeTextMHConstraints;
@property (retain, nonatomic) UIView *magicHeadView;
@property (retain, nonatomic) SFMagicHeadWheelView *magicHeadWheelView;

- (void)updateDarkening;
- (void).cxx_destruct;
- (void)setupConstraintsYukonMH;
- (void)_updateMHForCurrentSizeCategory;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
