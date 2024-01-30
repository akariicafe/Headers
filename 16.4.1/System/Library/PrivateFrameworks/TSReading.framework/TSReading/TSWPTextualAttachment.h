@interface TSWPTextualAttachment : TSWPAttachment

- (void)setStringEquivalent:(id)a0;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)a0;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;

@end
