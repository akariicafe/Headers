@class NSString, TSWPStorage;

@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver> {
    TSWPStorage *_storage;
    struct vector<TSWPParagraphMetrics, std::allocator<TSWPParagraphMetrics>> { struct TSWPParagraphMetrics *__begin_; struct TSWPParagraphMetrics *__end_; struct __compressed_pair<TSWPParagraphMetrics *, std::allocator<TSWPParagraphMetrics>> { struct TSWPParagraphMetrics *__value_; } __end_cap_; } _paragraphMetrics;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tearDown;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id).cxx_construct;
- (struct TSWPParagraphMetrics { BOOL x0; struct CGSize { double x0; double x1; } x1; unsigned long long x2; double x3; } *)paragraphMetricsForParagraphAtIndex:(unsigned long long)a0;
- (void)storage:(id)a0 didInsertParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)storage:(id)a0 didDeleteParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)storage:(id)a0 didChangeParagraphsInIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
