@class NSArray, NSMutableDictionary, NSURL, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface WebBookmarkChangeSet : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _lastBookmarkIDForAddingInMemoryBookmark;
    NSMutableOrderedSet *_changes;
    NSMutableDictionary *_bookmarkIDToChanges;
    NSMutableDictionary *_folderIDToDeletedChildrenChanges;
    NSMutableDictionary *_folderIDToAddedChildrenChanges;
    NSMutableDictionary *_folderIDToModifiedChildrenChanges;
}

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSArray *changes;

+ (id)sharedChangeSet;
+ (void)setSharedChangeSet:(id)a0;

- (id)modifiedBookmarksInBookmarkFolder:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateAddChangesWithInMemoryBookmarkID:(int)a0 toDatabaseGeneratedID:(int)a1;
- (void)removeAllChanges;
- (void)_readPersistedChanges;
- (id)addedBookmarksInBookmarkFolder:(int)a0;
- (id)deletedBookmarkIDsInBookmarkFolder:(int)a0;
- (void)persistChangesWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0;
- (unsigned long long)numberOfAddedBookmarksInBookmarkFolder:(int)a0;
- (void)addChange:(id)a0;
- (void)removeChange:(id)a0;
- (void)_removeAllChanges;
- (BOOL)isBookmarkDeleted:(int)a0;
- (long long)replayChangesToBookmark:(id)a0;
- (BOOL)bookmarkIsAddedInMemory:(int)a0;
- (void)_addChange:(id)a0;
- (int)nextBookmarkIDForAddingBookmarkInMemory;

@end
