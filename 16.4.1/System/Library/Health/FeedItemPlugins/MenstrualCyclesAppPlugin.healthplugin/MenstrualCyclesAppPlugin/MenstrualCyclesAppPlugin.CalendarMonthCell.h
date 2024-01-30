@class NSArray, NSDate;

@interface MenstrualCyclesAppPlugin.CalendarMonthCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ calendarView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ ax_spottingDays;
    void /* unknown type, empty encoding */ ax_flowDays;
}

@property (nonatomic, readonly) NSDate *ax_month;
@property (nonatomic, copy) NSArray *ax_spottingDays;
@property (nonatomic, copy) NSArray *ax_flowDays;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
