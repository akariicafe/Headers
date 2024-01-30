@class EKUILocationSearchModel, NSString, NSMutableDictionary, UISearchBar, EKStructuredLocation, UITableView, EKCalendarItem, EKUIConferenceRoom;

@interface EKLocationEditItemViewController : EKEditItemViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, EKUILocationSearchModelDelegate, EKUIManagedViewController> {
    UITableView *_tableView;
    EKUILocationSearchModel *_searchModel;
    EKCalendarItem *_calendarItem;
    NSMutableDictionary *_cachedConferenceRooms;
    struct CGSize { double width; double height; } _preferredContentSize;
    BOOL _supportsStructuredLocations;
    BOOL _tableConstraintsInstalled;
    BOOL _onlyAllowConferenceRooms;
    BOOL _rotating;
    BOOL _wasFirstResponder;
}

@property (retain, nonatomic) EKStructuredLocation *selectedLocation;
@property (retain, nonatomic) EKUIConferenceRoom *selectedConferenceRoom;
@property (copy, nonatomic) id /* block */ viewDidAppearBlock;
@property (nonatomic) BOOL needsSave;
@property (nonatomic) BOOL onlyDisplayMapLocations;
@property (nonatomic) BOOL onlyAllowConferenceRooms;
@property (nonatomic) BOOL fillSearchbarWithStructuredLocation;
@property (retain, nonatomic) EKStructuredLocation *structuredLocation;
@property (readonly, nonatomic) UISearchBar *searchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sectionNameForSection:(unsigned long long)a0;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)pinImage;
- (BOOL)canManagePresentationStyle;
- (void)dealloc;
- (void)loadView;
- (BOOL)presentModally;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)currentLocationUpdated:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)calendarItemForSearchModel:(id)a0;
- (BOOL)shouldIncludeConferenceRoom:(id)a0;
- (void)recentsSearchUpdated:(id)a0;
- (void)frequentsSearchUpdated:(id)a0;
- (void)eventsSearchUpdated:(id)a0;
- (void)conferenceRoomSearchUpdated:(id)a0;
- (void)locationSearchModel:(id)a0 selectedLocation:(id)a1 withError:(id)a2;
- (BOOL)showingTextRow;
- (BOOL)showingCurrentLocationRow;
- (void)useAsString:(id)a0;
- (id)conferenceRoomForRecent:(id)a0;
- (id)locationArrowImage;
- (id)contactsImage;
- (id)_cellForConferenceRoom:(id)a0 atIndexPath:(id)a1;
- (void)setViewAppearedBlock:(id /* block */)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 wantsHeaderForSection:(long long)a1;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)_setupConstraints;
- (void)contactsSearchUpdated:(id)a0;
- (void)mapSearchUpdated:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1 calendarItem:(id)a2 eventStore:(id)a3;
- (BOOL)wantsManagement;
- (id)title;
- (void)viewDidLoad;

@end
