@class WFTableSection, WFTableItemTreeNode, NSArray, NSMutableArray;

@interface WFTableItem : NSObject

@property (readonly, nonatomic) NSMutableArray *mutableChildren;
@property (readonly, nonatomic) WFTableItemTreeNode *node;
@property (readonly, weak, nonatomic) WFTableSection *section;
@property (readonly, nonatomic) Class cellClass;
@property (readonly, nonatomic) long long style;
@property (nonatomic) long long accessoryType;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic, getter=isExpanded) BOOL expanded;

+ (id)itemWithPrimaryText:(id)a0 image:(id)a1;
+ (id)itemWithStyle:(long long)a0 primaryText:(id)a1;
+ (id)itemWithCellClass:(Class)a0 representedObject:(id)a1 configurationBlock:(id /* block */)a2;
+ (id)itemWithPrimaryText:(id)a0;
+ (id)itemWithStyle:(long long)a0 primaryText:(id)a1 image:(id)a2;
+ (id)itemWithStyle:(long long)a0 primaryText:(id)a1 secondaryText:(id)a2;
+ (id)itemWithStyle:(long long)a0 primaryText:(id)a1 secondaryText:(id)a2 image:(id)a3;
+ (id)itemWithStyle:(long long)a0 representedObject:(id)a1 configurationBlock:(id /* block */)a2;

- (void)performBatchUpdates:(id /* block */)a0;
- (void)removeItem:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)removeItemAtIndex:(unsigned long long)a0;
- (void)removeFromParent;
- (void)configureCell:(id)a0;
- (id)initWithCellClass:(Class)a0 style:(long long)a1;
- (void)updateChildren;
- (id)nextItemInSection;

@end
