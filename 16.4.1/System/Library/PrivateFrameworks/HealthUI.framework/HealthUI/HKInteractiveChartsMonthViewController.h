@class UIColor, HKHealthStore, HKWeekdayHeaderPaletteView, _UINavigationControllerPalette, NSPredicate, HKSampleType;

@interface HKInteractiveChartsMonthViewController : HKMonthViewController

@property (retain, nonatomic) _UINavigationControllerPalette *containingPalette;
@property (retain, nonatomic) HKWeekdayHeaderPaletteView *weekdayHeaderPaletteView;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) UIColor *sampleColor;
@property (retain, nonatomic) NSPredicate *additionalSamplePredicate;

- (void)dismissViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)calendarScrollViewController:(id)a0 accessoryViewForDate:(id)a1 accessoryViewCompletion:(id /* block */)a2;
- (void)didTapTodayButton;
- (id)initWithHealthStore:(id)a0 dateCache:(id)a1 date:(id)a2;

@end
