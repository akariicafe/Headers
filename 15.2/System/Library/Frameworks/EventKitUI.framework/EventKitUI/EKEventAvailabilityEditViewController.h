@class NSString, NSMutableArray, UITableView;

@interface EKEventAvailabilityEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    unsigned long long _supportedAvailabilities;
    NSMutableArray *_choices;
    UITableView *_table;
}

@property (nonatomic) long long availability;
@property (nonatomic) unsigned long long supportedAvailabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)resetBackgroundColor;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_selectRow:(unsigned long long)a0;

@end
