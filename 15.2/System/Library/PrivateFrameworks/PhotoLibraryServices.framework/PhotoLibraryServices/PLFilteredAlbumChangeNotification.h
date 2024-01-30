@class NSIndexSet, NSString, PLIndexMapper, PLAssetContainerChangeNotification, PLFilteredAlbum;

@interface PLFilteredAlbumChangeNotification : PLAssetContainerChangeNotification <PLIndexMapperDataSource, PLDerivedNotification> {
    PLFilteredAlbum *_album;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerChangeNotification *_backingNotification;
}

@property (readonly, retain, nonatomic) NSIndexSet *updatedFilteredIndexes;
@property (copy, nonatomic) NSIndexSet *filteredIndexes;
@property (readonly, retain, nonatomic) PLIndexMapper *indexMapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)notificationForDerivedObject:(id)a0 priorChangeState:(id)a1 forBackingObjectNotification:(id)a2;

- (id)album;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned long long)a0;
- (BOOL)shouldReload;
- (void).cxx_destruct;
- (id)init;
- (id)_changedObjects;
- (BOOL)titleDidChange;
- (BOOL)keyAssetDidChange;
- (BOOL)_getOldSet:(id *)a0 newSet:(id *)a1;
- (id)_diffDescription;
- (id)initWithFilteredAlbum:(id)a0 priorChangeState:(id)a1 albumChangeNotification:(id)a2;
- (BOOL)countDidChange;
- (id)object;

@end
