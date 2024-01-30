@class NSArray;
@protocol _UIDocumentPickerOverviewDelegate;

@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController

@property (retain, nonatomic) NSArray *allPickers;
@property (retain, nonatomic) NSArray *auxiliaryOptions;
@property (retain, nonatomic) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL manage;
@property (weak, nonatomic) id<_UIDocumentPickerOverviewDelegate> delegate;

- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)updateContents;
- (void)updatePreferredContentSize;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithFileTypes:(id)a0 mode:(unsigned long long)a1 auxiliaryOptions:(id)a2 includeManagementItem:(BOOL)a3;

@end
