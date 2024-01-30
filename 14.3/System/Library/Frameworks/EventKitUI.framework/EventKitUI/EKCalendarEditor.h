@class NSString, NSArray, EKCalendarColorEditItem, UITableView, EKEventStore, EKSource, EKCalendar, EKCalendarShareesEditItem;
@protocol EKCalendarEditorDelegate, EKStyleProvider;

@interface EKCalendarEditor : UIViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {
    UITableView *_tableView;
    NSArray *_editItems;
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendarColorEditItem *_colorEditItem;
    unsigned long long _entityType;
    EKSource *_limitedToSource;
    struct CGSize { double width; double height; } _preferredContentSize;
}

@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKCalendar *calendar;
@property (weak, nonatomic) id<EKCalendarEditorDelegate> delegate;
@property (nonatomic) BOOL isNewCalendar;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel:(id)a0;
- (void)_eventStoreChanged:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (BOOL)canManagePresentationStyle;
- (void)dealloc;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (void)loadView;
- (void)_deleteClicked:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)done:(id)a0;
- (void)calendarItemStartedEditing:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_presentValidationAlert:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)isModalInPresentation;
- (id)owningNavigationController;
- (id)tableView;
- (void)viewDidAppear:(BOOL)a0;
- (void)_localeChanged;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)_editItems;
- (void)setupForCalendar;
- (BOOL)_shouldShowDeleteButton;
- (void)_deleteCalendar;
- (int)sectionForCalendarEditItem:(id)a0;
- (BOOL)wantsManagement;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)saveChanges;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
