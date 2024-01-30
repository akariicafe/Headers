@class NSArray, NSString, UIPickerView, UITableView;
@protocol WFTimeOffsetPickerViewControllerDelegate;

@interface WFTimeOffsetPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIPickerView *currentPickerView;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *tableViewItems;
@property (nonatomic) unsigned long long timeOffset;
@property (weak, nonatomic) id<WFTimeOffsetPickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)done:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)titleForRow:(long long)a0;
- (id)infoForSection:(long long)a0;
- (id)initWithTimeTriggerEvent:(unsigned long long)a0 timeOffset:(unsigned long long)a1;

@end
