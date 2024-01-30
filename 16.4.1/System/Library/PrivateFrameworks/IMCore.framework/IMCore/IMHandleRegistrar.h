@class IMBusinessNameManager, NSMutableDictionary, NSHashTable;

@interface IMHandleRegistrar : NSObject {
    NSMutableDictionary *_siblingsMap;
    NSHashTable *_allIMHandles;
    NSMutableDictionary *_IDToHandlesMap;
    NSMutableDictionary *_CNIDToHandlesMap;
    IMBusinessNameManager *_businessNameManager;
}

+ (id)sharedInstance;

- (id)businessNameForUID:(id)a0 updateHandler:(id /* block */)a1;
- (id)IDToHandlesMap;
- (id)getIDsForFinalBatch;
- (id)CNIDToHandlesMap;
- (id)siblingsForIMHandle:(id)a0;
- (void)removeHandleFromCNIDMap:(id)a0 withCNID:(id)a1;
- (void)_removeIMHandleToIDToHandlesMap:(id)a0;
- (id)_accountSiblingsForHandle:(id)a0;
- (void)processContactChangeHistoryEventWithHandleIDs:(id)a0 andCNContact:(id)a1;
- (void)_handleAddContactChangeHistoryEvent:(id)a0;
- (id)handlesForCNIdentifier:(id)a0;
- (void)clearCNIDToHandlesMap;
- (void)_handleUpdateContactChangeHistoryEvent:(id)a0;
- (void)_addressBookChanged;
- (void)addHandleToCNIDMap:(id)a0 CNContact:(id)a1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)a0;
- (void)_postContactChangeHistoryEventClientNotifications;
- (void)_buildSiblingsForIMHandle:(id)a0;
- (id)_chatSiblingsForHandle:(id)a0;
- (id)getIMHandlesForID:(id)a0;
- (id)_existingAccountSiblingsForHandle:(id)a0;
- (void)_addIMHandleToIDToHandlesMap:(id)a0;
- (void)_handleDropEverythingChangeHistoryEvent;
- (void)_dumpOutAllIMHandlesForAccount:(id)a0;
- (void)clearSiblingCacheForIMHandle:(id)a0;
- (id)init;
- (id)getIDsForInitialBatch;
- (void)registerIMHandle:(id)a0;
- (void)_clearSiblingsCacheForIMHandle:(id)a0 rebuildAfter:(BOOL)a1;
- (void)_handleDeleteContactChangeHistoryEvent:(id)a0;
- (id)allIMHandles;
- (id)getIDsForAllIMHandles;
- (void).cxx_destruct;
- (id)_existingChatSiblingsForHandle:(id)a0;
- (void)_dumpOutAllIMHandles;
- (void)unregisterIMHandle:(id)a0;

@end
