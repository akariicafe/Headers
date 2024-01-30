@class UITableView, EKUICustomRecurrenceViewController, NSString, NSIndexPath, NSDate, EKRecurrenceRule, EKCalendarItem;
@protocol EKRecurrenceTypeEditItemViewControllerDelegate;

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    NSString *_summaryString;
    UITableView *_table;
    NSIndexPath *_checkedItem;
}

@property (retain) EKUICustomRecurrenceViewController *customRecurrenceViewController;
@property (nonatomic) long long repeatType;
@property (retain) EKCalendarItem *calendarItem;
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule;
@property (retain, nonatomic) NSDate *suggestedStartDate;
@property (weak) id<EKRecurrenceTypeEditItemViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetBackgroundColor;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (void)_checkItemAtIndexPath:(id)a0;
- (id)_recurrenceCellForIndexPath:(id)a0;
- (void)setRecurrenceRuleFromRepeatType:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1 calendarItem:(id)a2;

@end
