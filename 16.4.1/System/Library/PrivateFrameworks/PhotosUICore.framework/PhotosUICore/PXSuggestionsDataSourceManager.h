@class NSPredicate, PXSuggestionsDataSource, NSString;

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXChangeObserver, PXPhotoLibraryUIChangeObserver>

@property (class, readonly, nonatomic) NSPredicate *baseFetchPredicate;

@property (readonly, nonatomic) unsigned short dataSourceType;
@property (readonly, nonatomic) PXSuggestionsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)typePredicateForDataSourceType:(unsigned short)a0;
+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)a0;

- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (id)_createNewDataSource;
- (void)_handleChangeWithDetails:(id)a0;
- (void)_resetDataSource;
- (id)initWithDataSourceType:(unsigned short)a0;

@end
