@class NSString, NSMutableDictionary, NSEnumerator;

@interface SynapseSyncPlugin : NSObject <AFSyncHandler> {
    NSMutableDictionary *_deletedIDs;
    NSMutableDictionary *_newItems;
    NSEnumerator *_anchorEnumerator;
    BOOL _currentSyncSlotAllowedToSync;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)beginSyncWithInfo:(id)a0 configuration:(id)a1;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (BOOL)_checkIfResetIsNeededForSyncTransaction:(id)a0 validity:(id)a1 serverCountOfItems:(long long)a2 startAnchorFromServer:(id)a3;
- (void)_clearChangeInfo;
- (id)_prepareToVendChangeInfoForSyncTransaction:(id)a0 startAnchorFromServer:(id)a1;
- (id)getDisallowedSyncSlotNames;
- (BOOL)isSyncSlotNameAllowedToSync:(id)a0;

@end
