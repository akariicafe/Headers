@class PDFTextPosition;

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

- (id)end;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (id)start;
- (id)initFromPos:(id)a0 toPos:(id)a1;

@end
