@class TwoPartTextLabel, UIColor, UILabel;
@protocol EKCellShortener;

@interface PreferencesTwoPartValueCell : EKUITableViewCell {
    TwoPartTextLabel *_twoPartLabel;
    unsigned int _notifiedShort;
    UILabel *_largePart2TextLabel;
}

@property (readonly, retain, nonatomic) TwoPartTextLabel *twoPartTextLabel;
@property (weak, nonatomic) id<EKCellShortener> shortener;
@property (readonly, retain, nonatomic) UIColor *valueColor;
@property (readonly, retain, nonatomic) UILabel *largePart2TextLabel;
@property (nonatomic) BOOL strikeThroughLargeDetailTextLabel;
@property (nonatomic) BOOL strikeThroughLargePart2TextLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)description;
- (void).cxx_destruct;
- (void)shorten;
- (void)_layoutSubviewsCore;
- (void)checkValueWidths;
- (void)layoutText:(id)a0 andValue:(id)a1;

@end
