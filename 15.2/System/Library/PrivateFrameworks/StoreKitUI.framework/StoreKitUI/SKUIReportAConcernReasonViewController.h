@class SKUIReportAConcernConfiguration, NSString, SKUIReportAConcernReasonDataSource, UITableView;

@interface SKUIReportAConcernReasonViewController : UIViewController <UITableViewDelegate>

@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration;
@property (retain, nonatomic) SKUIReportAConcernReasonDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)cancelPressed:(id)a0;

@end
