@class NSArray, NSString, _TtC6TSText16TSWPTopicNumbers, TPDocumentRoot;

@interface TPPageController : NSObject <TSWPFootnoteMarkProvider>

@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot;
@property (readonly, nonatomic) _TtC6TSText16TSWPTopicNumbers *bodyTopicNumbers;
@property (readonly, nonatomic) NSArray *numberOfPagesInEachSection;
@property (readonly, nonatomic) unsigned long long firstPageIndexNeedingLayout;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long lastLaidOutDocumentPageIndex;
@property (readonly, nonatomic) long long nominalFootnoteKind;
@property (readonly, nonatomic) long long nominalFootnoteNumbering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)a0;
- (id)markStringForFootnoteReferenceStorage:(id)a0;
- (id)pageInfoForPageIndex:(unsigned long long)a0;
- (BOOL)isPaginationComplete;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })footnoteLayoutRangeForPageIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (void)accquireLockAndPerformAction:(id /* block */)a0;
- (void)paginateThroughPageIndex:(unsigned long long)a0 forLayoutController:(id)a1;
- (id)markStringForFootnoteReferenceStorage:(id)a0 ignoreDeletedFootnotes:(BOOL)a1 forceDocumentEndnotes:(BOOL)a2;
- (unsigned long long)p_autoNumberForStorage:(id)a0 ignoreDeletedFootnotes:(BOOL)a1 footnoteKind:(long long)a2;
- (unsigned long long)pageIndexForCharIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (BOOL)textIsVerticalForFootnoteReferenceStorage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })bodyRangeForPageIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (unsigned long long)pageIndexForAnchoredCharIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })documentPageRangeOfSectionIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (unsigned long long)sectionIndexForPageIndex:(unsigned long long)a0 forcePagination:(BOOL)a1;
- (void)withPageLayoutAtIndex:(unsigned long long)a0 preferredLayoutController:(id)a1 executeBlock:(id /* block */)a2;
- (BOOL)isPaginationCompleteThroughPageIndex:(unsigned long long)a0;
- (BOOL)isPaginationInProgress;
- (BOOL)okToAnchorDrawable:(id)a0 toPageIndex:(unsigned long long)a1;
- (BOOL)okToAnchorDrawables:(id)a0 toPageIndex:(unsigned long long)a1;
- (unsigned long long)pageIndexFromCanvasPoint:(struct CGPoint { double x0; double x1; })a0;

@end
