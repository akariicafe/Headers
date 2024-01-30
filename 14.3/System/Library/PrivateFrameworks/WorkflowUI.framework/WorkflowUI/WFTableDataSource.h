@class NSArray, WFTableDataSourceTreeNode, NSString, NSMutableArray, UITableView;

@interface WFTableDataSource : NSObject <WFTreeObserver, UITableViewDataSource>

@property (readonly, nonatomic) WFTableDataSourceTreeNode *tree;
@property (readonly, nonatomic) NSMutableArray *mutableSections;
@property (weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *sections;
@property (nonatomic) double indentationWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)sectionAtIndex:(unsigned long long)a0;
- (void)removeSection:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)addSection:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)removeSectionAtIndex:(long long)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)insertSection:(id)a0 atIndex:(long long)a1;
- (id)itemAtIndexPath:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithTableView:(id)a0;
- (id)indexPathForItem:(id)a0;
- (void)treeNode:(id)a0 flattenedDescendentsDidChangeFrom:(id)a1 to:(id)a2 changeSource:(id)a3;
- (id)indexPathFromTableViewIndexPath:(id)a0;
- (id)cellIdentifierForItem:(id)a0;
- (id)treeNodeAtTableViewIndexPath:(id)a0;
- (id)treeNodeAtTreeIndexPath:(id)a0;

@end
