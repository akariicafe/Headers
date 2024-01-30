@interface SearchUIMultiResultRowModel : SearchUIRowModel

- (int)separatorStyle;
- (BOOL)isDraggable;
- (BOOL)isTappable;
- (id)dragAppBundleID;
- (Class)cellViewClass;

@end
