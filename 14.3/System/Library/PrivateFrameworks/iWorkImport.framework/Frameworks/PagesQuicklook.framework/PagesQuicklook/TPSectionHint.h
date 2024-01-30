@class NSMutableArray;

@interface TPSectionHint : NSObject

@property (readonly, nonatomic) NSMutableArray *pageHints;
@property (nonatomic) unsigned long long documentStartPageIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } documentPageRange;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageCountWithoutFillerPage;
@property (readonly, nonatomic) unsigned long long lastPageIndex;

+ (BOOL)verifyHints:(id)a0 withBodyStorage:(id)a1 upToPageIndex:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyForArchiving;
- (id)initWithArchive:(const struct SectionHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::PageHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a0 unarchiver:(id)a1;
- (id)copyForCaching;
- (BOOL)hasPageHintOfKind:(long long)a0 atPageIndex:(unsigned long long)a1;
- (id)pageHintForPageIndex:(unsigned long long)a0;
- (void)trimPageHintsFromPageIndex:(unsigned long long)a0;
- (BOOL)hasPageHintOfKind:(long long)a0 beforePageIndex:(unsigned long long)a1;
- (BOOL)hasEndOfTextLayoutBeforePageIndex:(unsigned long long)a0;
- (BOOL)containsDocumentPageIndex:(unsigned long long)a0;
- (void)setPageHints:(id)a0;
- (void)saveToArchive:(struct SectionHintArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TP::PageHintArchive> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; unsigned int x5; } *)a0 archiver:(id)a1 context:(id)a2 shouldArchiveHintBlock:(id /* block */)a3;

@end
