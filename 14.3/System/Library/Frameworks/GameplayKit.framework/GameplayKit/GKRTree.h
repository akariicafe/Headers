@interface GKRTree : NSObject {
    struct GKCRTree<NSObject, float __attribute__((ext_vector_type(2)))> { struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> { unsigned int x0; struct vector<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))>, std::__1::allocator<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> > > { struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *x0; struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *x1; struct __compressed_pair<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *, std::__1::allocator<GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> > > { struct GKCRTreeNode<NSObject, float __attribute__((ext_vector_type(2)))> *x0; } x2; } x1; id x2; } x0; } *_cRTree;
}

@property unsigned long long queryReserve;

+ (id)treeWithMaxNumberOfChildren:(unsigned long long)a0;

- (id)init;
- (void)dealloc;
- (id)initWithMaxNumberOfChildren:(unsigned long long)a0;
- (void)addElement:(id)a0 boundingRectMin:(SEL)a1 boundingRectMax:(id)a2 splitStrategy:(long long)a3;
- (void)removeElement:(id)a0 boundingRectMin:(SEL)a1 boundingRectMax:(id)a2;
- (id)elementsInBoundingRectMin:(id)a0 rectMax:(SEL)a1;

@end
