@class CKQuadTreeNode;

@interface CKQuadTree : NSObject

@property (readonly, nonatomic) CKQuadTreeNode *rootNode;

- (id)initWithPoints:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)visit:(id /* block */)a0;

@end
