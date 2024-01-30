@interface TSTTableViewSortRule : TSTTableSortRule

@property (readonly, nonatomic) struct TSUViewColumnOrRowIndex { unsigned int _index; } viewIndex;

+ (id)ruleWithViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a0 direction:(int)a1;

- (struct TSUModelColumnOrRowIndex { unsigned int x0; })baseIndex;
- (void)encodeToArchive:(void *)a0;
- (id)initFromArchive:(const void *)a0;
- (id)initWithViewIndex:(struct TSUViewColumnOrRowIndex { unsigned int x0; })a0 direction:(int)a1;

@end
