@class NSArray;

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;
- (id)cardSection;
- (BOOL)hasLeadingImage;
- (Class)cellViewClass;
- (id)reuseIdentifier;

@end
