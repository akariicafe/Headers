@class NSString, NSArray, EKSubscribedCalendarDescriptionHeader;
@protocol EKCalendarEditItemDelegate;

@interface EKCalendarSubscriptionDetailsViewController : UITableViewController <EKCalendarEditItemDelegate> {
    EKSubscribedCalendarDescriptionHeader *_tableHeaderView;
    NSArray *_sections;
}

@property (weak, nonatomic) id<EKCalendarEditItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_tableHeaderView;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetBackgroundColor;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isNewCalendar;
- (void)calendarItemStartedEditing:(id)a0;
- (int)sectionForCalendarEditItem:(id)a0;
- (id)owningNavigationController;
- (id)initWithCalendar:(id)a0 store:(id)a1;

@end
