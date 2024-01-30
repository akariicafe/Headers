@class TSTCellMap;

@interface TSTSummaryModelGroupByChangeState : TSKSosBase {
    BOOL _definedCellMap;
}

@property (readonly, nonatomic) struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } summaryRowHeightList;
@property (readonly, nonatomic) struct vector<double, std::__1::allocator<double> > { double *__begin_; double *__end_; struct __compressed_pair<double *, std::__1::allocator<double> > { double *__value_; } __end_cap_; } labelRowHeightList;
@property (readonly, nonatomic) struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } labelRowVisibilityList;
@property (retain, nonatomic) TSTCellMap *cellMap;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)saveToMessage:(struct SummaryModelGroupByChangeStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<double> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<double> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; struct Reference *x7; } *)a0 archiver:(id)a1;
- (id)initWithMessage:(const struct SummaryModelGroupByChangeStateArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedField<double> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x4; struct RepeatedField<double> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x5; struct RepeatedField<unsigned int> { int x0; int x1; union Pointer { struct Arena *x0; struct Rep *x1; } x2; } x6; struct Reference *x7; } *)a0 unarchiver:(id)a1;

@end
