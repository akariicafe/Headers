@class NSArray, NSDate;
@protocol WFTimeRangePickerViewControllerDelegate;

@interface WFTimeRangePickerViewController : UITableViewController

@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<WFTimeRangePickerViewControllerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)done:(id)a0;
- (void)cancel:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1;
- (void)endTimeChanged:(id)a0;
- (void)startTimeChanged:(id)a0;

@end
