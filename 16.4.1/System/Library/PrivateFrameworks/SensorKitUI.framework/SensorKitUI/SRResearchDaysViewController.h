@class NSArray, NSMutableSet;

@interface SRResearchDaysViewController : UITableViewController

@property (retain, nonatomic) NSMutableSet *deletedDays;
@property (nonatomic) double end;
@property (nonatomic) long long numberOfDays;
@property (retain, nonatomic) NSArray *tombstones;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)dateForRow:(long long)a0;
- (id)datesFrom:(double)a0 to:(double)a1;

@end
