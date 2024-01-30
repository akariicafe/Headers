@class NSString, SFSearchResult;

@interface SearchUIScreenTimeResultsRowModel : SearchUIRowModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) SFSearchResult *overrideIdentifyingResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isTappable;
- (Class)cellViewClass;
- (void).cxx_destruct;
- (Class)collectionViewCellClass;
- (id)identifyingResult;
- (id)initWithSection:(id)a0 result:(id)a1;

@end
