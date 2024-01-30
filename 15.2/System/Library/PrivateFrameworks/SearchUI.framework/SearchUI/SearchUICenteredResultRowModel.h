@interface SearchUICenteredResultRowModel : SearchUIRowModel

- (BOOL)isTappable;
- (id)nextCard;
- (Class)cellViewClass;
- (id)punchouts;

@end
