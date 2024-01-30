@class PDFTextPosition;

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

- (id)end;
- (id)description;
- (id)start;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initFromPos:(id)a0 toPos:(id)a1;

@end
