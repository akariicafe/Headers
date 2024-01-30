@interface GKOctreeNode : NSObject {
    struct GKCOctreeNode<NSObject> { void /* function */ **x0; float x1; struct GKCOctreeNode<NSObject> *x2; struct GKCOctreeNode<NSObject> *x3[8]; struct vector<NSObject *, std::__1::allocator<NSObject *> > { id *x0; id *x1; struct __compressed_pair<NSObject *__strong *, std::__1::allocator<NSObject *> > { id *x0; } x2; } x4; id x5; } *_cOctreeNode;
}

@property (readonly) struct GKBox { } box;

- (void *)cOctreeNode;
- (void)setCOctreeNode:(void *)a0;

@end
