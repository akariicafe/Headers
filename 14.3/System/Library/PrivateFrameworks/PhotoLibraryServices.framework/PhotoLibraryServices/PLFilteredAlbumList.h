@class PLManagedAlbumList, NSString, PLIndexMapper, NSPredicate, NSMutableIndexSet, NSObject, NSMutableOrderedSet, NSIndexSet, PLPhotoLibrary;
@protocol NSObject, PLIndexMappingCache, NSCopying;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache, PLDerivedAlbumListOrigin> {
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
}

@property (retain, nonatomic) PLManagedAlbumList *backingAlbumList;
@property (nonatomic) int filter;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSMutableOrderedSet *_albums;
@property (readonly, nonatomic) short albumListType;
@property (readonly, nonatomic) NSMutableOrderedSet *albums;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, nonatomic) BOOL canEditAlbums;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PLIndexMapper *indexMapper;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying> cachedIndexMapState;

+ (id)filteredAlbumList:(id)a0 filter:(int)a1;

- (id)managedObjectContext;
- (id)containers;
- (BOOL)isEmpty;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void).cxx_destruct;
- (void)enumerateDerivedAlbumLists:(id /* block */)a0;
- (void)dealloc;
- (id)filteredAlbumsAtIndexes:(id)a0;
- (void)setNeedsReordering;
- (void)insertObject:(id)a0 inFilteredAlbumsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned long long)a0;
- (BOOL)hasAtLeastOneAlbum;
- (void)replaceFilteredAlbumsAtIndexes:(id)a0 withFilteredValues:(id)a1;
- (void)_backingContextDidChange:(id)a0;
- (unsigned long long)countOfFilteredAlbums;
- (void)insertFilteredAlbums:(id)a0 atIndexes:(id)a1;
- (BOOL)needsReordering;
- (unsigned long long)indexInFilteredAlbumsOfObject:(id)a0;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (BOOL)canEditContainers;
- (void)removeFilteredAlbumsAtIndexes:(id)a0;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)_invalidateFilteredIndexes;
- (BOOL)mappedDataSourceChanged:(id)a0 remoteNotificationData:(id)a1;
- (void)unregisterAllDerivedAlbums;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)initWithBackingAlbumList:(id)a0 filter:(int)a1;
- (void)registerDerivedAlbumList:(id)a0;
- (id)objectInFilteredAlbumsAtIndex:(unsigned long long)a0;
- (Class)derivedChangeNotificationClass;
- (id)containersRelationshipName;
- (id)identifier;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)updateAlbumsOrderIfNeeded;

@end
