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

- (id)managedObjectContext;
- (id)containers;
- (BOOL)isEmpty;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (void).cxx_destruct;
- (id)photoLibrary;
- (void)dealloc;
- (void)setNeedsReordering;
- (BOOL)hasAtLeastOneAlbum;
- (void)assetContainerListDidChange:(id)a0;
- (BOOL)needsReordering;
- (short)albumListType;
- (BOOL)canEditContainers;
- (BOOL)canEditAlbums;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (id)albums;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;
- (void)_invalidateAllAlbums;
- (id)containersRelationshipName;
- (id)identifier;
- (BOOL)albumHasFixedOrder:(id)a0;
- (void)updateAlbumsOrderIfNeeded;

@end
