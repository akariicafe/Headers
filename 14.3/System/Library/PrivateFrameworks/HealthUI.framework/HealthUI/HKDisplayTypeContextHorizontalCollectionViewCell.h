@class NSArray, HKUIMetricColors, UILabel, HKDisplayTypeContextItem, UIButton;
@protocol HKDisplayTypeContextHorizontalCollectionViewCellDelegate;

@interface HKDisplayTypeContextHorizontalCollectionViewCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_infoButton;
    UILabel *_valueLabel;
    UILabel *_unitLabel;
    UILabel *_dateLabel;
    HKUIMetricColors *_currentMetricColors;
    NSArray *_horizontalConstraints;
}

@property (retain, nonatomic) HKDisplayTypeContextItem *contextItem;
@property (weak, nonatomic) id<HKDisplayTypeContextHorizontalCollectionViewCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_titleLabelFont;
- (void)prepareForReuse;
- (void)updateUI:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)infoButtonTapped:(id)a0;
- (id)_dateLabelFont;
- (id)_valueLabelFont;
- (id)_unitLabelFont;
- (id)_buildHorizontalConstraints;
- (void)_applyHorizontalDesign;
- (double)_titleLabelBaselineOffsetFromTop;
- (double)_valueLabelBaselineOffsetFromDateLabel;
- (double)_dateBaselineOffsetFromValue;
- (double)_bottomOffsetFromDateBaseline;
- (void)_setActiveForConstraints:(id)a0 active:(BOOL)a1;
- (void)updateMetricColors:(BOOL)a0;
- (void)updateUIColors;
- (void)_unapplyHorizontalDesign;

@end
