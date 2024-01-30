@class NSString, LiveFSFPItemHelper, NSPointerArray, LiveFSRBTree, NSObject, LiveFSFPExtensionHelper;
@protocol OS_dispatch_queue;

@interface LiveFSFPEnumeratorDataContainer : NSObject <LiveFSVolumeClientUpdate> {
    LiveFSFPExtensionHelper *ext;
    BOOL historyReset;
    BOOL isActive;
    NSPointerArray *ourEnumerators;
    NSObject<OS_dispatch_queue> *updateQueue;
}

@property (readonly) BOOL hasPersistentIDs;
@property (readonly) BOOL isDir;
@property BOOL addedToExtension;
@property BOOL addParent;
@property int state;
@property (readonly) BOOL isVolumeWide;
@property (readonly, retain) NSString *containerID;
@property (readonly) LiveFSFPItemHelper *enumeratedItem;
@property (retain) NSString *enumeratedItemID;
@property (readonly, retain) LiveFSRBTree *contentsSortedByDate;
@property (readonly, retain) LiveFSRBTree *contentsSortedByName;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)loadContents;
- (void)dropEnumerator:(id)a0;
- (void)renamedItem:(id)a0 named:(id)a1 fromDirectory:(id)a2 intoDirectory:(id)a3 newName:(id)a4 atopItem:(id)a5;
- (void)updatesDoneFor:(id)a0;
- (void)addEnumerator:(id)a0;
- (void)applyAddAcrossEnumerators:(id)a0 newName:(id)a1 forSelf:(BOOL)a2;
- (void)applyDeleteAcrossEnumerators:(id)a0 newTombstone:(id)a1 toSelf:(BOOL)a2;
- (void)applyParentUpdateAcrossEnumerators;
- (void)deletedItem:(id)a0 name:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)deletedName:(id)a0 item:(id)a1 how:(int)a2 interestedItem:(id)a3;
- (void)dispatchOntoUpdateQueue:(id /* block */)a0;
- (void)doProcessItemDeleted:(id)a0;
- (void)doProcessItemUpdated:(id)a0;
- (void)doShutdown;
- (void)doShutdownOnEnumeratorHelperQueue;
- (void)dropInterestForEnumeratedItem:(id)a0;
- (id)ensureConnectedForUpdates;
- (void)handleEnumeratedItemChanged;
- (void)historyResetItem:(id)a0 interestedItem:(id)a1;
- (void)historyResetName:(id)a0 interestedItem:(id)a1;
- (id)initForExtension:(id)a0 item:(id)a1;
- (id)initWithEnumeratedItem:(id)a0 fileHandle:(id)a1 extension:(id)a2;
- (void)makeAllEnumeratorsDead;
- (id)readDirBuffersForBufferBlock:(id /* block */)a0 andEntryBlock:(id /* block */)a1;
- (void)resetAllEnumerators;
- (void)updatedItem:(id)a0 name:(id)a1 interestedItem:(id)a2;
- (void)updatedName:(id)a0 interestedItem:(id)a1;
- (void)volumeWideDeletedName:(id)a0 interestedItem:(id)a1;
- (void)volumeWideUpdatedName:(id)a0 interestedItem:(id)a1;

@end
