@class NSArray, NSMutableSet;

@interface SRResearchDaysViewController : UITableViewController

@property (retain, nonatomic) NSMutableSet *deletedDays;
@property (nonatomic) double end;
@property (nonatomic) long long numberOfDays;
@property (retain, nonatomic) NSArray *tombstones;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)dealloc;
- (id)datesFrom:(double)a0 to:(double)a1;
- (id)dateForRow:(long long)a0;

@end
