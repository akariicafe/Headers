@class FBKSqliteReader, NSArray, NSString, NSURL;

@interface FBKSqliteIndexViewController : UITableViewController <UIDocumentInteractionControllerDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain) NSArray *tableNames;
@property (retain) FBKSqliteReader *reader;
@property (retain, nonatomic) NSURL *dbUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayExtension:(id)a0 strict:(BOOL)a1;
+ (BOOL)canDisplayURL:(id)a0;
+ (id)dbUrlForMetadataUrl:(id)a0;
+ (id)removeWalShm:(id)a0;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didReceiveMemoryWarning;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)documentInteractionControllerDidEndPreview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentInteractionControllerRectForPreview:(id)a0;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;
- (id)documentInteractionControllerViewForPreview:(id)a0;

@end
