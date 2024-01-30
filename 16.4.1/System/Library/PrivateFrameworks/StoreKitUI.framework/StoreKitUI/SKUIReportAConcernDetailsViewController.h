@class SKUIReportAConcernDetailsDataSource, SKUIReportAConcernConfiguration, SKUIReportAConcernMetadata, NSString, UITableView;

@interface SKUIReportAConcernDetailsViewController : UIViewController <UITableViewDelegate>

@property (retain, nonatomic) SKUIReportAConcernConfiguration *configuration;
@property (retain, nonatomic) SKUIReportAConcernDetailsDataSource *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) double keyboardHeight;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) SKUIReportAConcernMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillShow:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_keyboardWillHide:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)_detailsCellHeight;
- (id)_detailsText;
- (void)submitPressed:(id)a0;

@end
