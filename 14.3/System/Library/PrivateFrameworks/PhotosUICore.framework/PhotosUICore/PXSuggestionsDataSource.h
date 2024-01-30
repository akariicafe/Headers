@protocol PXDisplaySuggestionFetchResult;

@interface PXSuggestionsDataSource : PXSectionedDataSource

@property (readonly, nonatomic) id<PXDisplaySuggestionFetchResult> suggestions;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithSuggestionsFetchResult:(id)a0;
- (long long)numberOfSubitemsInItem:(long long)a0 section:(long long)a1;

@end
