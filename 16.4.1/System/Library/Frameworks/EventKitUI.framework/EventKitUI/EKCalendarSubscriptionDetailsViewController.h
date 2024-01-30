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

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)resetBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_tableHeaderView;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)calendarItemStartedEditing:(id)a0;
- (id)editorForCalendarEditItem:(id)a0;
- (id)initWithCalendar:(id)a0 store:(id)a1;
- (BOOL)isNewCalendar;
- (id)owningNavigationController;
- (int)sectionForCalendarEditItem:(id)a0;

@end
