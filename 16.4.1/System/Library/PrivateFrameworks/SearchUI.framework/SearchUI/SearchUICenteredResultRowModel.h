@interface SearchUICenteredResultRowModel : SearchUIRowModel

- (BOOL)isTappable;
- (Class)cellViewClass;
- (id)nextCard;
- (id)punchouts;

@end
