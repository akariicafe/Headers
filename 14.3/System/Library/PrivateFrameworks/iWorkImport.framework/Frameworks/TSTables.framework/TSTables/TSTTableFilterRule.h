@class TSTFormulaPredicate;

@interface TSTTableFilterRule : NSObject <NSCopying>

@property (retain, nonatomic) TSTFormulaPredicate *predicate;
@property (nonatomic) BOOL doesNotNeedFormulaRewriteForImport;

+ (id)ruleWithFormulaPredicate:(id)a0;
+ (id)ruleWhereValuesInTable:(id)a0 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a1 matchCell:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)formula;
- (id)initFromArchive:(const struct FilterRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaPredicateArchive *x4; BOOL x5; } *)a0;
- (void)encodeToArchive:(struct FilterRuleArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaPredicateArchive *x4; BOOL x5; } *)a0 archiver:(id)a1;
- (BOOL)needsFormulaRewriteForImport;
- (BOOL)needsThreshold;
- (struct TSUModelColumnIndex { unsigned short x0; })baseColumnIndexForFilterRuleInTableInfo:(id)a0;
- (id)initWithFormulaPredicate:(id)a0;
- (id)initRuleWhereValuesInTable:(id)a0 inBaseColumn:(struct TSUModelColumnIndex { unsigned short x0; })a1 matchCell:(id)a2;
- (id)copyByRewritingToUidFormWithTableInfo:(id)a0;
- (id)copyByRewritingToGeometricFormWithTableInfo:(id)a0 containsBadRef:(BOOL *)a1;
- (void)setDoesNotNeedFormulaRewriteForImport;
- (BOOL)matchesRow:(unsigned int)a0 withFormulaTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; } *)a1 withCalculationEngine:(id)a2;
- (BOOL)matchesCell:(id)a0;

@end
