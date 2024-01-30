@class NSDateComponents, HKDateCache, NSString, HKCalendarScrollViewController, UILabel, NSDate;
@protocol HKMonthViewControllerDelegate;

@interface HKMonthViewController : HKViewController <HKCalendarScrollViewControllerDelegate> {
    NSDateComponents *_cachedDateComponents;
}

@property (retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (weak, nonatomic) id<HKMonthViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL wantsShortTitleDate;
@property (nonatomic) long long titleAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setCurrentDate:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithDateCache:(id)a0 date:(id)a1;
- (void)setCurrentDate:(id)a0 animateIfPossible:(BOOL)a1;
- (void)calendarScrollViewController:(id)a0 didSelectDate:(id)a1;
- (void)calendarScrollViewController:(id)a0 didUpdateCenteredMonth:(id)a1;
- (void)_updateBackButton;
- (void)createCalendarScrollViewController;
- (void)createTitleLabel;
- (id)_titleStringForDate:(id)a0;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)a0;
- (void)_didTapBackButton;

@end
