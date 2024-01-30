@class PDFPage;

@interface PDFTextPosition : UITextPosition {
    PDFPage *_page;
    long long _offset;
}

- (id)page;
- (void).cxx_destruct;
- (long long)offset;
- (id)description;
- (id)initWithOffset:(long long)a0 onPage:(id)a1;

@end
