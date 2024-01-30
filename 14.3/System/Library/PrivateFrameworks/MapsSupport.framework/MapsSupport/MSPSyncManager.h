@class NSString, SYService, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MSPSyncManager : NSObject <SYServiceDelegate, SYSessionDelegate> {
    SYService *_service;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSMutableArray *_bookmarks;
    NSMutableDictionary *_bookmarksMap;
    NSMutableArray *_bookmarksForDisplay;
    NSMutableArray *_pins;
    NSMutableDictionary *_pinsMap;
    NSMutableArray *_history;
    NSMutableDictionary *_historyMap;
    BOOL _resetSyncRequested;
    NSMutableArray *_pendingSyncItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_bookmarkIsDisplayable:(id)a0;

- (id)pins;
- (id)init;
- (BOOL)service:(id)a0 startSession:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)notifyObservers;
- (id)bookmarks;
- (unsigned int)syncSession:(id)a0 enqueueChanges:(id /* block */)a1 error:(id *)a2;
- (void)syncSession:(id)a0 applyChanges:(id)a1 completion:(id /* block */)a2;
- (void)syncSession:(id)a0 didEndWithError:(id)a1;
- (BOOL)syncSession:(id)a0 resetDataStoreWithError:(id *)a1;
- (void)_notifyObservers;
- (id)history;
- (void)service:(id)a0 didSwitchFromPairingID:(id)a1 toPairingID:(id)a2;
- (void)_addPin:(id)a0;
- (id)readPins;
- (void)setDroppedPin:(id)a0;
- (void)completedSync;
- (void)_updateFromDisk;
- (void)_resumeSyncService;
- (id)_wrapBookmark:(id)a0 changeType:(long long)a1;
- (id)_wrapPin:(id)a0 changeType:(long long)a1;
- (id)_wrapHistoryItem:(id)a0 changeType:(long long)a1;
- (void)completedPreparingSync;
- (void)_applyAddItem:(id)a0;
- (void)_applyUpdateItem:(id)a0;
- (void)_applyDeleteItem:(id)a0;
- (void)_clearAllNanoPersistableData;
- (void)_addBookmark:(id)a0;
- (void)_addHistoryItem:(id)a0;
- (void)_updateBookmark:(id)a0;
- (void)_updatePin:(id)a0;
- (void)_updateHistoryItem:(id)a0;
- (void)_removeBookmark:(id)a0;
- (void)_removePin:(id)a0;
- (void)_removeHistoryItem:(id)a0;
- (void)writeBookmarks:(id)a0;
- (void)writePins:(id)a0;
- (void)writeHistory:(id)a0;
- (id)readBookmarks;
- (void)_findDisplayableBookmarks;
- (id)readHistory;
- (void)_setHasChangesAvailable;
- (void)setNeedsFullSync;
- (id)displayableBookmarks;
- (void)updateHistoryItem:(id)a0;

@end
