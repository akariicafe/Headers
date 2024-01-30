@class PDFTextPosition;

@interface PDFTextRange : UITextRange {
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

+ (id)textRangeFromSelection:(id)a0;

- (BOOL)isEmpty;
- (id)end;
- (id)start;
- (id)description;
- (void).cxx_destruct;
- (id)initFromPos:(id)a0 toPos:(id)a1;

@end
