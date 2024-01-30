@interface GKQuadtree : NSObject {
    struct GKCQuadTree<NSObject> { void /* function */ **x0; struct GKCQuadTreeNode<NSObject> *x1; } *_cQuadTree;
}

+ (id)quadtreeWithBoundingQuad:(struct GKQuad { })a0 minimumCellSize:(float)a1;

- (id)init;
- (void)dealloc;
- (BOOL)removeElement:(id)a0;
- (id)initWithBoundingQuad:(struct GKQuad { })a0 minimumCellSize:(float)a1;
- (id)addElement:(SEL)a0 withPoint:(id)a1;
- (id)addElement:(id)a0 withQuad:(struct GKQuad { })a1;
- (id)elementsAtPoint:(SEL)a0;
- (id)elementsInQuad:(struct GKQuad { })a0;
- (BOOL)removeElement:(id)a0 withNode:(id)a1;

@end
