@class PDFPageRangePrivate;

@interface PDFPageRange : NSObject {
    PDFPageRangePrivate *_private;
}

- (id)page;
- (void)setPage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPage:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
