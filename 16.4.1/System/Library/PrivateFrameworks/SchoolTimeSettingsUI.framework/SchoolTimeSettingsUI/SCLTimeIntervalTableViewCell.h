@class NSDateFormatter, UITableViewDiffableDataSource, NSString, UITableView;

@interface SCLTimeIntervalTableViewCell : PSTableCell <UITableViewDelegate, SCLTimePickerTableViewCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic, getter=isReloadingAnimated) BOOL reloadingAnimated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (id)timeInterval;
- (void).cxx_destruct;
- (void)reloadWithSpecifier:(id)a0 animated:(BOOL)a1;
- (unsigned long long)pickerState;
- (void)configureTimePickerCell:(id)a0 forRow:(unsigned long long)a1;
- (void)configureTimeCell:(id)a0 forRow:(unsigned long long)a1;
- (id)constraintInterval;
- (id)dateConverter;
- (id)scheduleTimeFormatter;
- (id)snapshotForPickerState:(unsigned long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 itemIdentifier:(id)a2;
- (void)timePickerCell:(id)a0 didUpdateDate:(id)a1;

@end
