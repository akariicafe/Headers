@class NSArray, TSCHChartDrawableInfo, NSSet, TSCHSelectionPath, TSCHSelectionPathType;

@interface TSCHSelection : TSKSelection

@property (readonly, retain, nonatomic) TSCHChartDrawableInfo *chartInfo;
@property (readonly, copy, nonatomic) NSArray *paths;
@property (readonly, nonatomic) unsigned long long pathCount;
@property (readonly, copy, nonatomic) TSCHSelectionPath *firstPath;
@property (readonly, copy, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, copy, nonatomic) NSSet *pathTypes;
@property (readonly, nonatomic) BOOL returnChartFrameForAutoscroll;

+ (Class)archivedSelectionClass;
+ (id)selectionWithChartInfo:(id)a0 paths:(id)a1;
+ (id)emptySelectionWithChartInfo:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPaths:(id)a0;
- (void)saveToArchive:(struct ChartSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; struct DrawableSelectionArchive *x6; } *)a0 archiver:(id)a1;
- (id)initFromArchive:(const struct ChartSelectionArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct Reference *x5; struct DrawableSelectionArchive *x6; } *)a0 unarchiver:(id)a1;
- (id)initWithChartInfo:(id)a0 paths:(id)a1;
- (id)initWithChartInfo:(id)a0 path:(id)a1;
- (id)selectionByAddingPathsFromArray:(id)a0;
- (id)selectionByRemovingPathsFromArray:(id)a0;

@end
