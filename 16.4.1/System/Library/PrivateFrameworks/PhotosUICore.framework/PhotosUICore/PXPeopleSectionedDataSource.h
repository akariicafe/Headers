@class NSArray, NSString, PXPhotoLibraryLocalDefaults, NSHashTable, NSObject, NSIndexPath;
@protocol OS_dispatch_queue;

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver, PXPhotoLibraryDefaultsChangeObserver>

@property (readonly, copy, nonatomic) NSArray *dataSources;
@property (readonly, nonatomic) PXPhotoLibraryLocalDefaults *localDefaults;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;
@property (retain, nonatomic) id pauseToken;
@property (retain, nonatomic) NSHashTable *changeObservers;
@property (copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long numberOfSections;
@property (readonly, nonatomic) unsigned long long numberOfDisclosedSections;
@property (readonly, nonatomic) unsigned long long totalPersonCount;
@property (readonly, copy, nonatomic) NSArray *allPersons;
@property (readonly, nonatomic) NSIndexPath *leadingFavoritePersonIndexPath;
@property (readonly, nonatomic) NSIndexPath *trailingFavoritePersonIndexPath;
@property (nonatomic) unsigned long long peopleHomeSortingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChangeObserver:(id)a0;
- (void)removeChangeObserver:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithSections:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)dealloc;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)personsForType:(long long)a0;
- (id)_dataSourceForFetchType:(unsigned long long)a0;
- (id)_dataSourceForIndexPath:(id)a0;
- (id)_dataSourceForSection:(long long)a0;
- (unsigned long long)_fetchTypeForPersonType:(long long)a0;
- (id)_generateChangeDetailsForChangeInstance:(id)a0;
- (long long)_sectionForFetchType:(unsigned long long)a0;
- (void)_setPeopleHomeSortingType:(unsigned long long)a0;
- (void)addVisiblePerson:(id)a0;
- (BOOL)canReorderMembersInSection:(long long)a0;
- (void)cancelImageLoadingForItem:(id)a0;
- (void)changePersonsAtIndexPaths:(id)a0 toPersonType:(long long)a1 undoManager:(id)a2;
- (id)faceTileAtIndexPath:(id)a0;
- (unsigned long long)fetchTypeForSection:(long long)a0;
- (void)imageAtIndexPath:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (void)imageAtIndexPath:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (id)indexPathOfPerson:(id)a0;
- (void)loadAndStartListeningToLibraryNotifications;
- (id)localizedDisclosedTitleForSection:(long long)a0;
- (id)localizedTitleForSection:(long long)a0;
- (id)memberAtIndexPath:(id)a0;
- (void)movePersonAtIndexPath:(id)a0 toIndexPath:(id)a1 undoManager:(id)a2 shouldUpdateImmediately:(BOOL)a3;
- (unsigned long long)numberOfPersonsInSection:(long long)a0;
- (unsigned long long)numberOfPersonsWithContactName;
- (unsigned long long)numberOfPersonsWithStringName;
- (void)pauseListeningForChangesWithTimeout:(double)a0 identifier:(id)a1;
- (id)personAtIndexPath:(id)a0;
- (id)personsAtIndexPaths:(id)a0;
- (void)photoLibraryLocalDefaults:(id)a0 didChangeValueForKey:(id)a1;
- (unsigned long long)photoQuantityAtIndexPath:(id)a0;
- (void)reloadFromDatabase;
- (void)removeVisiblePerson:(id)a0;
- (void)resumeListeningForChanges;
- (void)startListeningToLibraryNotifications;
- (void)stopListeningToLibraryNotifications;
- (id)titleAtIndexPath:(id)a0;

@end
