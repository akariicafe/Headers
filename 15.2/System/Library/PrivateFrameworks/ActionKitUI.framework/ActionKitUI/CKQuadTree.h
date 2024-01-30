@class CKQuadTreeNode;

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode;

- (void).cxx_destruct;
- (id)init;
- (void)visit:(id /* block */)a0;
- (id)initWithPoints:(id)a0;

@end
