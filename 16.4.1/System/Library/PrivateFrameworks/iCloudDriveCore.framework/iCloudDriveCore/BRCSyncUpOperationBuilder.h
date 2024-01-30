@class BRCUserDefaults, BRCSyncUpOperation, BRCAccountSessionFPFS, NSMutableSet;

@interface BRCSyncUpOperationBuilder : NSObject {
    NSMutableSet *_fullyChainedParentIDWhitelist;
    NSMutableSet *_halfChainedParentIDWhitelist;
}

@property (retain, nonatomic) BRCSyncUpOperation *op;
@property (retain, nonatomic) BRCAccountSessionFPFS *session;
@property (retain, nonatomic) BRCUserDefaults *defaults;

- (float)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (float)addDeletionOfAlias:(id)a0;
- (float)addDeletionOfDirectory:(id)a0;
- (float)addDeletionOfDocument:(id)a0;
- (float)addDeletionOfFinderBookmark:(id)a0;
- (float)addDeletionOfItem:(id)a0;
- (float)addDeletionOfRecordID:(id)a0 ckInfo:(id)a1;
- (float)addDeletionOfSharedTopLevelItem:(id)a0;
- (float)addEditOfDirectory:(id)a0;
- (float)addEditOfDocument:(id)a0;
- (float)addEditOfFinderBookmark:(id)a0;
- (float)addEditOfSharedTopLevelItem:(id)a0;
- (float)addEditOfSymlink:(id)a0;
- (BOOL)checkIfSyncAllowedInSharedZoneForItem:(id)a0;
- (float)fakeSyncForItem:(id)a0 serverItem:(id)a1 inZone:(id)a2;
- (void)handleDeletionOfSharedItem:(id)a0;
- (void)handleEditOfSharedItem:(id)a0;
- (void)prepareAppLibraryRootSyncUpForItem:(id)a0;
- (unsigned char)shouldPCSChainStatusForItem:(id)a0;

@end
