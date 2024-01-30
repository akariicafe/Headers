@class NSArray, NSMutableDictionary, NSString, BPSMultipleWatchMigrationPickerTableView;

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) BPSMultipleWatchMigrationPickerTableView *devicesTable;
@property (retain, nonatomic) NSMutableDictionary *selectedStates;
@property (retain, nonatomic) NSArray *migratableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andStyle:(unsigned long long)a1;
- (id)selectedMigrationDevices;
- (double)tableHeight;

@end
