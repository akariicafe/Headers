@class TSTMergeRegionMap;

@interface TSTMergeRegionMapIterator : NSObject {
    TSTMergeRegionMap *mMergeRegionMap;
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> > { struct __hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSUColumnRowCoordinate, TSUColumnRowSize>, void *> *> *__node_; } __i_; } mMergeRegionIterator;
}

- (void)reset;
- (void)dealloc;
- (id).cxx_construct;
- (struct { struct { unsigned short x0; unsigned char x1; unsigned char x2; } x0; struct { unsigned short x0; unsigned short x1; } x1; })nextMergeRegion;
- (id)initWithMergeRegionMap:(id)a0;
- (BOOL)hasNextMergeRegion;

@end
