@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;
@property (readonly) long long numberOfRows;

- (id)cardSection;
- (id)initWithResults:(id)a0;
- (id)reuseIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (BOOL)hasLeadingImage;
- (id)initWithResult:(id)a0 cardSection:(id)a1 queryId:(unsigned long long)a2;

@end
