@class NSArray;

@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel

@property (retain) NSArray *cardSectionRowModels;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResults:(id)a0;
- (id)initWithResult:(id)a0 cardSection:(id)a1 isInline:(BOOL)a2 queryId:(unsigned long long)a3;
- (Class)cardSectionViewClass;

@end
