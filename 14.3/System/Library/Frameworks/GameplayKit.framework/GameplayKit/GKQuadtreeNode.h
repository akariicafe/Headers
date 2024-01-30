@interface GKQuadtreeNode : NSObject {
    struct GKCQuadTreeNode<NSObject> { void /* function */ **x0; float x1; struct GKCQuadTreeNode<NSObject> *x2; struct GKCQuadTreeNode<NSObject> *x3[4]; struct vector<NSObject *, std::__1::allocator<NSObject *> > { id *x0; id *x1; struct __compressed_pair<NSObject *__strong *, std::__1::allocator<NSObject *> > { id *x0; } x2; } x4; id x5; } *_cQuadTreeNode;
}

@property (readonly, nonatomic) struct GKQuad { void /* unknown type, empty encoding */ quadMin; void /* unknown type, empty encoding */ quadMax; } quad;

- (void /* unknown type, empty encoding */)max;
- (void /* unknown type, empty encoding */)min;
- (void *)cQuadTreeNode;
- (void)setCQuadTreeNode:(void *)a0;

@end
