@class HKAudiogramSample, HKAudiogramChartViewController;

@interface AIAudiogramResultGraphCell : UITableViewCell

@property (retain, nonatomic) HKAudiogramChartViewController *audiogramChart;
@property (retain, nonatomic) HKAudiogramSample *audiogram;

+ (double)cellHeight;
+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;

@end
