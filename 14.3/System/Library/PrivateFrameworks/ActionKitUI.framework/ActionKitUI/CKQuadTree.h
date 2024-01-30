@class CKQuadTreeNode;

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode;

- (id)init;
- (void).cxx_destruct;
- (void)visit:(id /* block */)a0;
- (id)initWithPoints:(id)a0;

@end
