@class NSArray, NSString, NSHashTable, NSObject, NSIndexPath;
@protocol OS_dispatch_queue;

@interface PXPeopleSectionedDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (readonly, copy, nonatomic) NSArray *dataSources;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)personAtIndexPath:(id)a0;
- (unsigned long long)numberOfPersonsWithContactName;
- (id)indexPathOfPerson:(id)a0;
- (void)resumeListeningForChanges;
- (void)pauseListeningForChangesWithTimeout:(double)a0 identifier:(id)a1;
- (void)addChangeObserver:(id)a0;
- (void)stopListeningToLibraryNotifications;
- (id)memberAtIndexPath:(id)a0;
- (unsigned long long)photoQuantityAtIndexPath:(id)a0;
- (id)initWithSections:(id)a0;
- (unsigned long long)fetchTypeForSection:(long long)a0;
- (void)loadAndStartListeningToLibraryNotifications;
- (id)localizedDisclosedTitleForSection:(long long)a0;
- (id)_dataSourceForIndexPath:(id)a0;
- (BOOL)canReorderMembersInSection:(long long)a0;
- (unsigned long long)_fetchTypeForPersonType:(long long)a0;
- (void)cancelImageLoadingForItem:(id)a0;
- (void)movePersonAtIndexPath:(id)a0 toIndexPath:(id)a1 shouldUpdateImmediately:(BOOL)a2;
- (void)removeVisiblePerson:(id)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void).cxx_destruct;
- (id)_dataSourceForSection:(long long)a0;
- (void)removeChangeObserver:(id)a0;
- (unsigned long long)numberOfPersonsWithStringName;
- (id)_generateChangeDetailsForChangeInstance:(id)a0;
- (id)personsForType:(long long)a0;
- (void)startListeningToLibraryNotifications;
- (void)changePersonsAtIndexPaths:(id)a0 toPersonType:(long long)a1;
- (id)_dataSourceForFetchType:(unsigned long long)a0;
- (void)imageAtIndexPath:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 resultHandler:(id /* block */)a3;
- (id)localizedTitleForSection:(long long)a0;
- (long long)_sectionForFetchType:(unsigned long long)a0;
- (id)titleAtIndexPath:(id)a0;
- (void)imageAtIndexPath:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2 fastDisplayBlock:(id /* block */)a3;
- (void)dealloc;
- (id)personsAtIndexPaths:(id)a0;
- (id)faceTileAtIndexPath:(id)a0;
- (unsigned long long)numberOfPersonsInSection:(long long)a0;
- (void)addVisiblePerson:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void)reloadFromDatabase;

@end
