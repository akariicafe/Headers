@class NSString, NSArray, NSDictionary, VUIDownloadDataSource, VUIMediaEntitiesFetchController, VUIMediaLibrary, VUILibraryFamilyMembersDataSource;

@interface VUIMPMenuDataSource : VUILibraryMenuDataSource <VUIMediaEntitiesFetchControllerDelegate, VUILibraryDataSourceDelegate, VUIDownloadDataSourceDelegate>

@property (retain, nonatomic) NSArray *homeShares;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *mediaEntitiesFetchController;
@property (retain, nonatomic) NSDictionary *categoryTypeByFetchRequestIdentifier;
@property (retain, nonatomic) NSArray *categoryTypes;
@property (retain, nonatomic) NSDictionary *mediaEntitiesByCategoryType;
@property (nonatomic) BOOL hasMediaEntitiesFetchCompleted;
@property (retain, nonatomic) NSArray *genreGroupings;
@property (retain, nonatomic) VUIMediaEntitiesFetchController *rentalsUpdateFetchController;
@property (retain, nonatomic) VUILibraryFamilyMembersDataSource *familyDataSource;
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource;
@property (nonatomic) BOOL hasDownloadDataSourceFetchCompleted;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_accountsChanged:(id)a0;
- (void)downloadManager:(id)a0 downloadsDidChange:(id)a1;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (id)_deviceMediaLibrary;
- (void)startFetch;
- (void)dataSourceDidFinishFetching:(id)a0;
- (id)initWithValidCategories:(id)a0;
- (id /* block */)_categoryTypesSortComparator;
- (void)_notifyDelegateFetchDidComplete;
- (void)_addRentalsUpdateNotificationObserver;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_updateRentalShelf;
- (void)downloadManager:(id)a0 downloadedFetchDidFinishWithEntities:(id)a1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_homeShareMediaLibrariesDidChange:(id)a0;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)a0;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addAccountChangedNotificationObserver;
- (void)_removeAccountChangedNotificationObserver;
- (void)_loadMediaEntityShelves;
- (BOOL)_addOrRemoveDownloadCategoryIfNeeded;
- (BOOL)_allFetchesHaveCompleted;
- (id)_constructCategoryList;
- (BOOL)_addOrRemoveFamilySharingCategoryIfNeeded;
- (void)_populateViewModel:(id)a0;
- (id)_fetchRequestsWithMediaLibrary:(id)a0 categoryTypeMap:(id *)a1;
- (id)_categoryTypesWithMediaEntitiesMap:(id)a0 categoryTypeComparator:(id /* block */)a1;

@end
