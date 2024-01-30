@class AKController, NSArray, NSString, UITableView;

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *lineWidthTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateLineImageForTag:(long long)a0 selected:(BOOL)a1;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)currentLineWidthTag;
- (void)selectRowForTag:(long long)a0;
- (id)indexPathForLineWidthTag:(long long)a0;
- (void)selectedLineWidthChanged:(long long)a0;

@end
