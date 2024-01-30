@interface TSWPCharacterStyler : TSWPStorageStyler

- (id)initWithStorage:(id)a0;
- (void)applyStyle:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 undoTransaction:(struct TSWPStorageTransaction { } *)a2;
- (void)performStylingInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 undoTransaction:(struct TSWPStorageTransaction { } *)a1;

@end
