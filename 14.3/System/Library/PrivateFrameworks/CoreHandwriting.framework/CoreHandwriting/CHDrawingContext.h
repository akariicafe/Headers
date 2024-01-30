@class CHClassifiableDrawing;

@interface CHDrawingContext : NSObject

@property (readonly, nonatomic) unsigned long long edgeIndex;
@property (readonly, nonatomic) long long numberOfSubstrokes;
@property (readonly, nonatomic) long long numberOfSegments;
@property (readonly, retain, nonatomic) CHClassifiableDrawing *classifiableDrawing;
@property (readonly, nonatomic) struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *__begin_node_; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long __value_; } __pair3_; } __tree_; } strokeGroup;
@property (readonly, nonatomic) struct vector<long, std::__1::allocator<long> > { long long *__begin_; long long *__end_; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *__value_; } __end_cap_; } delayedSegmentIDs;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithEdgeIndex:(unsigned long long)a0 numberOfSubstrokes:(long long)a1 numberOfSegments:(long long)a2 classifiableDrawing:(id)a3 strokeGroup:(struct set<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree<long, std::__1::less<long>, std::__1::allocator<long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long> > { unsigned long long x0; } x2; } x0; })a4 delayedSegmentIDs:(struct vector<long, std::__1::allocator<long> > { long long *x0; long long *x1; struct __compressed_pair<long *, std::__1::allocator<long> > { long long *x0; } x2; })a5;

@end
