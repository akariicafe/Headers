@class NSString, WFTableDataSource;

@interface WFSSHKeyHashViewController : UITableViewController

@property (readonly, copy, nonatomic) NSString *hashString;
@property (readonly, nonatomic) WFTableDataSource *dataSource;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithHashString:(id)a0 title:(id)a1;

@end
