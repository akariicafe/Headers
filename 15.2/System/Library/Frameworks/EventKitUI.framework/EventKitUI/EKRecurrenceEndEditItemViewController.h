@class UIDatePicker, NSString, UITableViewCell, NSArray, NSDate, PreferencesValueCell, UITableView;

@interface EKRecurrenceEndEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKCellShortener> {
    PreferencesValueCell *_dateCell;
    NSDate *_preNeverEndDate;
    NSDate *_minimumEndDate;
    int _shorteningStatus;
    unsigned char _updatingPicker : 1;
    UITableView *_table;
    UIDatePicker *_datePicker;
    UITableViewCell *_datePickerCell;
    NSArray *_datePickerConstraints;
}

@property (copy, nonatomic) NSDate *repeatEndDate;
@property (copy, nonatomic) NSDate *bestInitialDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_neverLocalizedString;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_localeChanged;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)shortenCell:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetBackgroundColor;
- (void)dealloc;
- (void)datePickerChanged:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleProvider:(id)a1;
- (void)applyMinimumEndDateToPicker;
- (void)updatePicker;
- (id)_cellForRow:(long long)a0;
- (void)_updateSelectionForCell:(id)a0 atRow:(long long)a1;
- (id)_stringForEndDate;
- (id)_endDateStringForCurrentShorteningStatus;
- (void)setMinimumEndDate:(id)a0;
- (BOOL)fitsPopoverWhenKeyboardActive;

@end
