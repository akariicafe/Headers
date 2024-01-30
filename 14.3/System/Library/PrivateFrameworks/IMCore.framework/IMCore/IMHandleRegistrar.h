@class IMBusinessNameManager, NSMutableDictionary, NSHashTable;

@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (void)registerIMHandle:(id)a0;
- (id)getIDsForInitialBatch;
- (id)init;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (void).cxx_destruct;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (void)_buildSiblingsForIMHandle:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (id)siblingsForIMHandle:(id)a0;
- (id)_existingChatSiblingsForHandle:(id)a0;
- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (id)getIDsForAllIMHandles;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (id)getIMHandlesForID:(id)a0;
- (id)getIDsForFinalBatch;
- (void)unregisterIMHandle:(id)a0;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (id)allIMHandles;
- (void)_addressBookChanged;
- (void)clearCNIDToHandlesMap;
- (id)CNIDToHandlesMap;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (void)_dumpOutAllIMHandles;
- (id)_accountSiblingsForHandle:(id)a0;
- (void)_postContactChangeHistoryEventClientNotifications;
- (id)IDToHandlesMap;
- (id)handlesForCNIdentifier:(id)a0;
- (void)_handleDropEverythingChangeHistoryEvent;

@end
