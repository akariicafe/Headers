@class TSCECellValue, NSMutableDictionary;

@interface TSTGroupNodeFormatManager : NSObject {
    NSMutableDictionary *_dict;
    BOOL _noFormatMergingNeeded;
}

@property (readonly, retain, nonatomic) TSCECellValue *cellValue;

- (void).cxx_destruct;
- (void)reset;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSK::FormatStructArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive_RowSetArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct CellValueArchive *x6; } *)a0;
- (id)description;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSK::FormatStructArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct RepeatedPtrField<TST::CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_FormatManagerArchive_RowSetArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x5; struct CellValueArchive *x6; } *)a0;
- (id)initWithCellValue:(id)a0;
- (void)updateWithDocumentRoot:(id)a0;
- (BOOL)mergedFormatChangedByAddingRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0 andCellValue:(id)a1;
- (BOOL)mergedFormatChangedByRemovingRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
- (void)p_recalculateMergedFormat;

@end
