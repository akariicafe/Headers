@class NSArray, UILabel, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController {
    UILabel *_footerLabel;
    double _separatorValue;
}

@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSArray *searchResults;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)preferSeparatorValue:(double)a0;
- (void)updateWithSearchText:(id)a0 searchResults:(id)a1;

@end
