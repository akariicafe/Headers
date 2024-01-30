@interface TSWPTextualAttachment : TSWPAttachment

- (id)stringEquivalent;
- (BOOL)shouldArchiveStringEquivalent;
- (id)stringWithPageNumber:(unsigned long long)a0 pageCount:(unsigned long long)a1 charIndex:(unsigned long long)a2;
- (void)setStringEquivalent:(id)a0;
- (id)stringEquivalentWithLayoutParent:(id)a0;

@end
