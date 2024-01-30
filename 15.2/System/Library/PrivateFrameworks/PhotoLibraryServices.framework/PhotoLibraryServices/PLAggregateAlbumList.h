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

- (BOOL)albumHasFixedOrder:(id)a0;
- (id)albums;
- (id)managedObjectContext;
- (id)containers;
- (id)identifier;
- (void)preheatAlbumsForProperties:(id)a0 relationships:(id)a1;
- (BOOL)canEditContainers;
- (id)photoLibrary;
- (BOOL)needsReordering;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)assetContainerListDidChange:(id)a0;
- (short)albumListType;
- (void)preheatAlbumsAtIndexes:(id)a0 forProperties:(id)a1 relationships:(id)a2;
- (id)containersRelationshipName;
- (void)setNeedsReordering;
- (void)dealloc;
- (BOOL)canEditAlbums;
- (void)updateAlbumsOrderIfNeeded;
- (id)initWithFilter:(int)a0 inPhotoLibrary:(id)a1;
- (void)_invalidateAllAlbums;

@end
