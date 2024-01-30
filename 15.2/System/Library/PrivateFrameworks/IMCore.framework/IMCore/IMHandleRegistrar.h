@class IMBusinessNameManager, NSMutableDictionary, NSHashTable;

@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (id)CNIDToHandlesMap;
- (id)allIMHandles;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (id)getIDsForFinalBatch;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (void)_addressBookChanged;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (void)clearCNIDToHandlesMap;
- (id)getIMHandlesForID:(id)a0;
- (id)handlesForCNIdentifier:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)registerIMHandle:(id)a0;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (id)IDToHandlesMap;
- (id)_existingChatSiblingsForHandle:(id)a0;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;
- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getIDsForAllIMHandles;
- (void)_postContactChangeHistoryEventClientNotifications;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (void)_dumpOutAllIMHandles;
- (id)siblingsForIMHandle:(id)a0;
- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (id)getIDsForInitialBatch;
- (id)_accountSiblingsForHandle:(id)a0;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (void)unregisterIMHandle:(id)a0;
- (void)_buildSiblingsForIMHandle:(id)a0;

@end
