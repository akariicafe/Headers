@class NSString, NSMutableOrderedSet;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
}

@property (nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumListWithFilter:(int)a0 inPhotoLibrary:(id)a1;

- (short)albumListType;
- (id)albums;
- (id)containers;
- (BOOL)isEmpty;
- (BOOL)needsReordering;
- (id)containersRelationshipName;
- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (void)assetContainerListDidChange:(id)a0;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (void)dealloc;
- (BOOL)canEditContainers;
- (void)setNeedsReordering;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)canEditAlbums;
- (void).cxx_destruct;
- (void)_invalidateAllAlbums;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;

@end
