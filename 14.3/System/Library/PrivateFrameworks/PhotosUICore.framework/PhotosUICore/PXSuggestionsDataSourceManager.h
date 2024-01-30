@class NSPredicate, PXSuggestionsDataSource, NSString;

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) NSPredicate *baseFetchPredicate;

@property (readonly, nonatomic) unsigned short dataSourceType;
@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typePredicateForDataSourceType:(unsigned short)a0;
+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)a0;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)init;
- (id)createInitialDataSource;
- (id)initWithDataSourceType:(unsigned short)a0;
- (void)_handleChangeWithDetails:(id)a0;

@end
