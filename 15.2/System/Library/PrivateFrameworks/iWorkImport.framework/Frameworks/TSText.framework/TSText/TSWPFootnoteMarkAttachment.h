@interface TSWPFootnoteMarkAttachment : TSWPTextualAttachment

- (unsigned int)elementKind;
- (id)copyWithContext:(id)a0;
- (id)stringEquivalent;
- (BOOL)shouldStyleBeExtended;
- (void)saveToArchiver:(id)a0;

@end
