@class NSObject;
@protocol OS_dispatch_queue;

@interface PDFPageEvaluator : NSObject {
    struct CGPDFPage { } *_page;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _pageBounds;
    unsigned long long _pageArea;
    struct CGPDFGState { } *_gstate;
    struct CGPDFOperatorTable { } *_table;
    struct CGPDFContentStream { } *_cs;
    BOOL _scanned;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *asyncWorkQueue;

@property (nonatomic, getter=isCandidateForOCR) BOOL candidateForOCR;
@property (readonly) struct CGPDFContentStream { } *contentStream;
@property (readonly) struct CGPDFRState { } *rstate;

+ (struct CGPDFOperatorTable { } *)createOperatorTable;
+ (BOOL)isPageCandidateForOCR:(id)a0;
+ (void)isPageCandidateForOCR:(id)a0 completion:(id /* block */)a1;

- (id)initWithParent:(id)a0;
- (void)dealloc;
- (id)initWithPage:(id)a0;
- (void)op_singlequote:(struct CGPDFScanner { } *)a0;
- (void)op_doublequote:(struct CGPDFScanner { } *)a0;
- (void)failCandidateForOCR:(struct CGPDFScanner { } *)a0;
- (id)initWithParent:(id)a0 stream:(struct CGPDFStream { } *)a1 resources:(struct CGPDFDictionary { } *)a2;
- (void)op_Do:(struct CGPDFScanner { } *)a0;
- (void)op_Q:(struct CGPDFScanner { } *)a0;
- (void)op_TJ:(struct CGPDFScanner { } *)a0;
- (void)op_Tj:(struct CGPDFScanner { } *)a0;
- (void)op_cm:(struct CGPDFScanner { } *)a0;
- (void)op_q:(struct CGPDFScanner { } *)a0;

@end
