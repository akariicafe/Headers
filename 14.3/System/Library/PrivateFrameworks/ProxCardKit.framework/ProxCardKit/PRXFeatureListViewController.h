@class NSArray, NSString, UIImage, NSMutableArray, UITableView;

@interface PRXFeatureListViewController : PRXCardContentViewController <UITableViewDelegate, UITableViewDataSource> {
    NSMutableArray *_features;
}

@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIImage *featureImage;
@property (readonly, nonatomic) NSArray *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentView:(id)a0;
- (void)_updateSeparatorInsets;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)addFeature:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateHeaderView;
- (void)viewDidLoad;

@end
