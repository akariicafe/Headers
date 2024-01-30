@class UILabel, NSString, UIView;

@interface HUCalendarScrubberCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UILabel *dayMonthLabel;
@property (copy, nonatomic) NSString *dayOfWeekString;
@property (copy, nonatomic) NSString *dateString;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
