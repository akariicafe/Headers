@class NSArray;

@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel

@property (retain) NSArray *cardSectionRowModels;

- (id)cardSection;
- (id)initWithResults:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTappable;
- (void).cxx_destruct;
- (Class)cardSectionViewClass;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;

@end
