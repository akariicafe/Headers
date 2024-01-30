@class UIFont, MTAlarm, NSArray, MTUIBedtimeGraphView, UIImageView, UIButton, UILabel, MTUIDigitalClockLabel;

@interface MTUIBedtimeTimeInBedView : UIView

@property (nonatomic) long long options;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTUIDigitalClockLabel *bedtimeLabel;
@property (retain, nonatomic) MTUIDigitalClockLabel *wakeLabel;
@property (retain, nonatomic) UIImageView *bedtimeGlyph;
@property (retain, nonatomic) UIImageView *wakeGlyph;
@property (retain, nonatomic) MTUIBedtimeGraphView *graphView;
@property (retain, nonatomic) UIButton *moreHistoryButton;
@property (nonatomic) double glyphSize;
@property (copy, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *sleepData;
@property (readonly, nonatomic) UIFont *titleFont;

+ (long long)defaultOptions;

- (id)initWithOptions:(long long)a0;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)moreHistoryButtonPressed:(id)a0;

@end
