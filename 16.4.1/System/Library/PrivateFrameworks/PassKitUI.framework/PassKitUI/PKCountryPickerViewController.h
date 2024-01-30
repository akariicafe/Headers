@class NSArray, UILocalizedIndexedCollation;
@protocol PKCountryPickerViewControllerDelegate;

@interface PKCountryPickerViewController : UITableViewController

@property (retain, nonatomic) UILocalizedIndexedCollation *collation;
@property (retain, nonatomic) NSArray *countries;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<PKCountryPickerViewControllerDelegate> delegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (void)_configureSections;
- (void)_loadCountryCodes;

@end
