@class PLAssetContainerListChangeNotification, NSIndexSet, NSString, PLIndexMapper, PLFilteredAlbumList;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource> {
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerListChangeNotification *_backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilteredAlbumList:(id)a0 albumListChangeNotification:(id)a1;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)_diffDescription;
- (id)albumList;
- (BOOL)countDidChange;
- (id)object;

@end
