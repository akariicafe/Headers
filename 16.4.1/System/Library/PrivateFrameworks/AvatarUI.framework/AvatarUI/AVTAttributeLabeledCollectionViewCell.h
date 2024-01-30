@class UILabel, UIVisualEffectView, NSString;

@interface AVTAttributeLabeledCollectionViewCell : AVTAttributeCollectionViewCell

@property (retain, nonatomic) UIVisualEffectView *labelBackgroundView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *labelString;
@property (nonatomic) double labelVerticalSpace;
@property (nonatomic) BOOL shouldHideLabelBackground;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateLabelBackgroundAppearance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForAttributeView;

@end
