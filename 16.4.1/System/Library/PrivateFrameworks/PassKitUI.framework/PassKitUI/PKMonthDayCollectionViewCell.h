@class UILabel, UIView;

@interface PKMonthDayCollectionViewCell : UICollectionViewCell {
    UILabel *_dayLabel;
    UIView *_topLine;
    UIView *_leftLine;
    UIView *_bottomLine;
}

@property (nonatomic) long long dayNumber;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setDayNumber:(long long)a0 withTitle:(id)a1;

@end
