@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (void).cxx_destruct;
- (id)cardSection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)cellViewClass;
- (id)reuseIdentifier;
- (id)initWithResults:(id)a0;
- (BOOL)hasLeadingImage;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2;

@end
