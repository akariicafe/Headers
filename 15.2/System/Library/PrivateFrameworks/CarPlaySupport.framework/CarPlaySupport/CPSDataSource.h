@class NSString, NSIndexPath, UITableView;

@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource>

@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long rowAnimation;
@property (copy, nonatomic) id /* block */ cellConfigureBlock;
@property (copy, nonatomic) id /* block */ cellCreateBlock;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSIndexPath *firstItemIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (id)indexPathForItemWithIdentifier:(id)a0;
- (void)insertSectionsAtIndexes:(id)a0;
- (void)deleteSectionsAtIndexes:(id)a0;

@end
