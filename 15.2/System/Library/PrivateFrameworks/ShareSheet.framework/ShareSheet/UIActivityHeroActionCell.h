@class UIStackView, UIImageView, UILabel, NSLayoutConstraint;

@interface UIActivityHeroActionCell : UIActivityActionCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *activityImageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *tallBottomInsetConstraint;

+ (long long)numberOfLinesForTitle:(id)a0 itemWidth:(double)a1;
+ (double)heightForNumberOfLines:(double)a0;

- (void)setDisabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;

@end
