@class WFTableSectionTreeNode, NSString, NSMutableArray, WFTableDataSource;

@interface WFTableSection : NSObject <WFTreeObserver>

@property (readonly, nonatomic) WFTableSectionTreeNode *node;
@property (readonly, nonatomic) NSMutableArray *mutableItems;
@property (readonly, weak, nonatomic) WFTableDataSource *dataSource;
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)section;
+ (id)sectionWithItems:(id)a0;
+ (id)sectionWithStyle:(long long)a0 representedObjects:(id)a1 configurationBlock:(id /* block */)a2;
+ (id)sectionWithCellClass:(Class)a0 representedObjects:(id)a1 configurationBlock:(id /* block */)a2;

- (void)performBatchUpdates:(id /* block */)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)currentIndex;
- (BOOL)isEqual:(id)a0;
- (id)tableView;
- (void)treeNode:(id)a0 flattenedDescendentsDidChangeFrom:(id)a1 to:(id)a2 changeSource:(id)a3;
- (void)applyItems:(id)a0;
- (void)updateCellForItem:(id)a0;
- (unsigned long long)recursiveChildrenCount;

@end
