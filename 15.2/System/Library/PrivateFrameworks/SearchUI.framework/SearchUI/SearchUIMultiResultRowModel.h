@class NSArray;

@interface SearchUIMultiResultRowModel : SearchUIRowModel

@property (retain) NSArray *multiResults;

- (id)results;
- (BOOL)isDraggable;
- (int)separatorStyle;
- (BOOL)isTappable;
- (long long)removeResult:(id)a0;
- (BOOL)isFocusable;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (Class)collectionViewCellClass;
- (Class)cellViewClass;
- (id)dragAppBundleID;
- (id)initWithResults:(id)a0;

@end
