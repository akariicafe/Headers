@class NSString, EKEventStore, NSArray, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditorDelegate;

@interface EKAbstractCalendarEditor : UITableViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {
    struct CGSize { double width; double height; } _preferredContentSize;
    NSArray *_editItems;
    BOOL _isNewCalendar;
}

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider;
@property (weak, nonatomic) id<EKCalendarEditorDelegate> delegate;
@property (retain, nonatomic) EKCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createNewCalendarForEntityType:(unsigned long long)a0 inEventStore:(id)a1;

- (void)_eventStoreChanged:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)updatePreferredContentSize;
- (void)cancel:(id)a0;
- (id)rightButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)leftButton;
- (void)_presentValidationAlert:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_localeChanged;
- (void)viewWillDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setEventStore:(id)a0;
- (void)loadView;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (BOOL)canManagePresentationStyle;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)done:(id)a0;
- (BOOL)isModalInPresentation;
- (void)resetBackgroundColor;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)wantsManagement;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)saveChanges;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isNewCalendar;
- (id)editItems;
- (void)setupForCalendar;
- (void)saveCalendar;
- (void)willSaveCalendar:(id)a0;
- (void)didSaveCalendar:(id)a0;
- (id)loadEditItems;
- (void)calendarItemStartedEditing:(id)a0;
- (int)sectionForCalendarEditItem:(id)a0;
- (id)owningNavigationController;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (void)reloadEditItems;

@end
