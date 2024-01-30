@class NSArray, NSIndexPath, NSMutableArray;

@interface VSTreeNode : NSObject

@property (weak, nonatomic) VSTreeNode *parentNode;
@property (retain, nonatomic) NSMutableArray *children;
@property (readonly, nonatomic) id representedObject;
@property (readonly, copy, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (readonly, copy, nonatomic) NSArray *childNodes;
@property (readonly, nonatomic) NSMutableArray *mutableChildNodes;

+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)keyPathsForValuesAffectingLeaf;
+ (id)treeNodeWithRepresentedObject:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRepresentedObject:(id)a0;
- (id)_descendantNodesAtDepth:(unsigned long long)a0;
- (id)descendantNodeAtIndexPath:(id)a0;
- (void)enumerateDescendantsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)insertChildNodes:(id)a0 atIndexes:(id)a1;
- (void)removeChildNodesAtIndexes:(id)a0;

@end
