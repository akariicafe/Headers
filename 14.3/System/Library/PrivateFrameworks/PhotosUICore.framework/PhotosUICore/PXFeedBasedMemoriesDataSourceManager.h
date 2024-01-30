@class NSString, PXMemoriesFeedWidgetDataSourceManager, PXMemoriesFeedDataSource;

@interface PXFeedBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXSectionedDataSourceManagerObserver>

@property (readonly, nonatomic) PXMemoriesFeedWidgetDataSourceManager *childDataSourceManager;
@property (retain, nonatomic) PXMemoriesFeedDataSource *childDataSource;
@property (readonly, nonatomic) BOOL shouldHandleEntireDataSource;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dataSourceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createInitialDataSource;
- (void).cxx_destruct;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithMemoriesFeedWidgetDataSourceManager:(id)a0;
- (id)_adjustDataSourceIfNeeded:(id)a0;
- (id)_adjustChangeDetailsIfNeeded:(id)a0 previousDataSource:(id)a1 newDataSource:(id)a2;
- (id)_adjustChangedIndexSetIfNeeded:(id)a0;
- (void)_handleDataSourceChange;

@end
