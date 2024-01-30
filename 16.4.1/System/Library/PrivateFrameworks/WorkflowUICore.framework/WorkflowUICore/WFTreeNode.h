@class NSArray, NSString, NSMutableArray;

@interface WFTreeNode : NSObject

@property (readonly, nonatomic) NSMutableArray *mutableChildNodes;
@property (retain, nonatomic) id representedObject;
@property (readonly, nonatomic, getter=isLeaf) BOOL leaf;
@property (copy, nonatomic) NSArray *childNodes;
@property (readonly, weak, nonatomic) WFTreeNode *parentNode;
@property (readonly, nonatomic) NSString *nodeDescription;

- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (void)insertNode:(id)a0 atIndex:(unsigned long long)a1;
- (id)debugDescription;
- (id)init;
- (void)removeNodeAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setParentNode:(id)a0;
- (id)initWithRepresentedObject:(id)a0;
- (id)debugDescriptionAtDepth:(unsigned long long)a0;
- (id)descendentNodeAtRelativeIndexPath:(id)a0;
- (void)moveNodeFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)paddedStringAtDepth:(unsigned long long)a0;

@end
