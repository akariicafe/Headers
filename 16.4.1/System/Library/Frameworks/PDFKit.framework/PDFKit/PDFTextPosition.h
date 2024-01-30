@class PDFPage;

@interface PDFTextPosition : UITextPosition {
    PDFPage *_page;
    long long _offset;
}

- (id)page;
- (long long)offset;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOffset:(long long)a0 onPage:(id)a1;

@end
