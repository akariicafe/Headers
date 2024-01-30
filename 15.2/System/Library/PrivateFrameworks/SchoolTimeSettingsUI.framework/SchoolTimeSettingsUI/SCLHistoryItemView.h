@class NSArray, SCLUnlockHistoryItemFormatter, SCLTimeIntervalsFormatter, UILabel, SCLHistoryGroup;

@interface SCLHistoryItemView : UIView

@property (retain, nonatomic) NSArray *verticalLayoutConstraints;
@property (retain, nonatomic) NSArray *unconditionalConstraints;
@property (retain, nonatomic) UILabel *intervalLabel;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) SCLUnlockHistoryItemFormatter *historyItemFormatter;
@property (retain, nonatomic) SCLTimeIntervalsFormatter *intervalsFormatter;
@property (copy, nonatomic) SCLHistoryGroup *historyGroup;

- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
