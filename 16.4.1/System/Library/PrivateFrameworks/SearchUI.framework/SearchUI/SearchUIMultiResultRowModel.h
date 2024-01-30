@class NSArray;

@interface SearchUIMultiResultRowModel : SearchUIRowModel

@property (retain) NSArray *multiResults;

- (int)separatorStyle;
- (id)dragAppBundleID;
- (id)accessibilityIdentifier;
- (id)initWithResults:(id)a0;
- (id)results;
- (BOOL)isFocusable;
- (BOOL)isTappable;
- (BOOL)isDraggable;
- (long long)removeResult:(id)a0;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (Class)collectionViewCellClass;

@end
