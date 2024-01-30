@class PGGraphHighlightTypeNodeCollection, PGGraphHighlightNodeCollection;

@interface PGGraphHighlightGroupNodeCollection : PGGraphHighlightNodeCollection

@property (readonly, nonatomic) PGGraphHighlightNodeCollection *highlightNodes;
@property (readonly, nonatomic) PGGraphHighlightTypeNodeCollection *typeNodes;

+ (Class)nodeClass;
+ (id)highlightGroupNodesForUUIDs:(id)a0 inGraph:(id)a1;

- (id)highlightGroupNodes;
- (id)momentNodes;

@end
