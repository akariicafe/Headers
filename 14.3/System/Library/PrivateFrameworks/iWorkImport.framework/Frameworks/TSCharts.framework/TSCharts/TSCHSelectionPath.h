@class TSCHSelectionPathType, NSArray;

@interface TSCHSelectionPath : NSObject <NSCopying> {
    NSArray *mArguments;
}

@property (readonly, nonatomic) TSCHSelectionPathType *pathType;
@property (readonly, nonatomic) TSCHSelectionPath *subSelection;

+ (id)seriesSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1;
+ (id)selectionPathWithType:(id)a0 name:(id)a1 arguments:(id)a2;
+ (id)seriesValueLabelSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)seriesSymbolsSelectionPathWithSeriesIndex:(unsigned long long)a0;
+ (id)selectionPathWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
+ (id)seriesEditModeSelectionPath;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const struct ChartSelectionPathArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ChartSelectionPathTypeArchive *x5; struct ChartSelectionPathArchive *x6; } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)type;
- (id)argumentAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)name;
- (void)saveToArchive:(struct ChartSelectionPathArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSCH::ChartSelectionPathArgumentArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; struct ChartSelectionPathTypeArchive *x5; struct ChartSelectionPathArchive *x6; } *)a0;
- (unsigned long long)argumentsCount;
- (id)initWithType:(id)a0 name:(id)a1 arguments:(id)a2;
- (id)debuggingName;
- (id)initWithPathType:(id)a0 arguments:(id)a1 subSelection:(id)a2;
- (id)rangeOfReferenceLinePathsToPath:(id)a0 forModel:(id)a1;
- (id)rangeOfPathsToPath:(id)a0;

@end
