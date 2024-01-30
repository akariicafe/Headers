@class TSCEReferenceTracker, NSString, NSMutableSet, TSTTableInfo;

@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate>

@property (retain, nonatomic) NSMutableSet *references;
@property (retain, nonatomic) TSCEReferenceTracker *referenceTracker;
@property (weak, nonatomic) TSTTableInfo *tableInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; } *)a0 archiver:(id)a1;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; } *)a0 unarchiver:(id)a1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })ownerUID;
- (void)setOwnerUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a0;
- (void)registerWithCalcEngine:(id)a0;
- (void)referencedCellWasModified:(id)a0;
- (BOOL)shouldRewriteOnSort;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnTranspose;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (id)cellRangeWasInserted:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } *)a0;
- (void)unregisterFromCalcEngine;
- (id)initWithTableInfo:(id)a0 context:(id)a1;
- (void)updateForSortRules:(id)a0;
- (struct TSCESpanningRangeRef { struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x0; struct TSUCellCoord { unsigned int x0; unsigned short x1; BOOL x2; BOOL x3; } x1; } x0; struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } x1; } x0; unsigned char x1; })p_referenceForColumnIndex:(unsigned short)a0;
- (id)p_ruleReferenceForTrackedReference:(id)a0;
- (unsigned short)p_columnForTrackedReference:(id)a0;

@end
