@class PXContextualMemoriesSettings, NSString, UIView;

@interface PXContextualMemoriesSettingsTableViewController : UITableViewController <MKMapViewDelegate, CNContactPickerDelegate>

@property (retain, nonatomic) PXContextualMemoriesSettings *settings;
@property (nonatomic) BOOL showsDatePicker;
@property (nonatomic) BOOL showsLocationPicker;
@property (retain, nonatomic) UIView *progressIndicatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)title;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_handleLongPress:(id)a0;
- (void)dealloc;
- (void)_installProgressIndicatorView;
- (void)_tableView:(id)a0 selectionDidUpdateForRowAtIndexPath:(id)a1;
- (void)_updateDatePickerHidden;
- (void)_updateLocationPickerHidden;
- (long long)_sectionForSettingOfClass:(Class)a0;
- (void)_reloadRowAndRestoreSelectionIfNeededAtIndexPath:(id)a0;
- (long long)_sectionForDate;
- (long long)_sectionForLocation;
- (long long)_sectionForPeople;
- (id)_indexPathForDateValue;
- (id)_indexPathForLocationValue;
- (id)_indexPathForPeopleValue;
- (id)_indexPathForDatePicker;
- (id)_indexPathForLocationPicker;
- (BOOL)_isDatePickerCellAtIndexPath:(id)a0;
- (BOOL)_isLocationPickerCellAtIndexPath:(id)a0;
- (BOOL)_isPeopleValueCellAtIndexPath:(id)a0;
- (struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })_regionForLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)_didChangeDatePicker:(id)a0;
- (void)_didPressResetAll:(id)a0;
- (void)_showContactsPicker;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)mapView:(id)a0 viewForAnnotation:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)contactPicker:(id)a0 didSelectContacts:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
