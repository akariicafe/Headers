@class PXCMMPeopleSuggestionsDataSource;

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXCMMPeopleSuggestionsDataSource *dataSource;

- (void)startLoading;
- (BOOL)isLoading;
- (void)boostLoading;
- (void)cancelLoading;

@end
