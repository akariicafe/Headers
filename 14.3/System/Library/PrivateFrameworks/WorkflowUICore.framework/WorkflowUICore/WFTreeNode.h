@class NSArray, NSMutableArray, NSIndexPath;
@protocol WFTreeObserver;

@interface WFTreeNode : NSObject

@property (readonly, nonatomic) NSMutableArray *mutableChildNodes;
@property (retain, nonatomic) id representedObject;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (copy, nonatomic) NSArray *childNodes;
@property (readonly, weak, nonatomic) WFTreeNode *parentNode;
@property (weak, nonatomic) id<WFTreeObserver> observer;
@property (readonly, nonatomic) NSArray *flattenedDescendents;

- (void)removeNode:(id)a0;
- (id)init;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setParentNode:(id)a0;
- (void)removeNodeAtIndex:(unsigned long long)a0;
- (void)addNode:(id)a0;
- (id)debugDescription;
- (id)initWithRepresentedObject:(id)a0;
- (id)descendentNodeAtRelativeIndexPath:(id)a0;
- (void)moveNodeFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)childDescendentsDidChange:(id)a0 oldValue:(id)a1 changeSource:(id)a2;
- (void)setFlattenedDescendents:(id)a0 changeSource:(id)a1;
- (id)debugDescriptionAtDepth:(unsigned long long)a0;
- (id)paddedStringAtDepth:(unsigned long long)a0;

@end
