@class SearchUIGridLayoutManager;

@interface SearchUIGridRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUIGridLayoutManager *gridLayoutManager;
@property (nonatomic) BOOL shouldHide;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 gridLayoutManager:(id)a2 queryId:(unsigned long long)a3;
- (BOOL)prefersNoSeparatorAbove;
- (BOOL)hasLeadingImage;

@end
