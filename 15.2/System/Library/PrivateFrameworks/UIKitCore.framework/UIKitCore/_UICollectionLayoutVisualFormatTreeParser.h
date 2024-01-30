@class NSArray, _UICollectionLayoutVisualTreeNode;

@interface _UICollectionLayoutVisualFormatTreeParser : NSObject

@property (copy, nonatomic) NSArray *visualFormats;
@property (retain, nonatomic) _UICollectionLayoutVisualTreeNode *root;

+ (id)treeParserWithVisualFormats:(id)a0;

- (id)_parse;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)a0;
- (id)description;
- (void)_visitChildrenOfNodeDepthFirst:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_nodeForParser:(id)a0 withParserDict:(id)a1 size:(id)a2;
- (id)initWithVisualFormats:(id)a0;

@end
