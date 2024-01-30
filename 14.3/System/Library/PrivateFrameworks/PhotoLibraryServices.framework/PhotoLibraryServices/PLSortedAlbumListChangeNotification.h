@class PLAssetContainerListChangeNotification, PLSortedAlbumList;

@interface PLSortedAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLSortedAlbumList *_albumList;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)_changedObjects;
- (id)init;
- (BOOL)countDidChange;
- (id)albumList;
- (void).cxx_destruct;
- (id)initWithSortedAlbumList:(id)a0 albumListChangeNotification:(id)a1;
- (id)object;
- (id)description;
- (BOOL)shouldReload;

@end
