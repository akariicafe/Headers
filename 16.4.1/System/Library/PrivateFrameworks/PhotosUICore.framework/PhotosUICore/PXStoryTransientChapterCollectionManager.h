@class PXUpdater, NSArray;
@protocol PXStoryChapterCollection, PXStoryTransientChapterCollectionManagerPersistenceDelegate;

@interface PXStoryTransientChapterCollectionManager : PXStoryChapterCollectionManager <PXStoryMutableTransientChapterCollectionManager>

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) NSArray *edits;
@property (readonly, nonatomic) id<PXStoryChapterCollection> uneditedChapterCollection;
@property (weak, nonatomic) id<PXStoryTransientChapterCollectionManagerPersistenceDelegate> persistenceDelegate;

- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (BOOL)_validateEditTransaction:(id)a0 error:(id *)a1;
- (void)_invalidateChapterCollection;
- (void)_updateChapterCollection;
- (BOOL)applyEditTransaction:(id)a0 error:(id *)a1;
- (id)initWithChapterCollection:(id)a0;
- (id)initWithUneditedChapterCollection:(id)a0;
- (void)setEdits:(id)a0;
- (void)setUneditedChapterCollection:(id)a0;

@end
