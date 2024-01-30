@class NSMapTable;

@interface LiveFSServiceMountPoint : NSObject <NSFileProviderLiveItemConnectionCoordination> {
    unsigned long long validConnections;
    int connectionCount;
    NSMapTable *_currentConnections;
}

@property unsigned long long workingSetInterest;
@property (readonly) BOOL renameChangesFileID;
@property (readonly) BOOL hasPersistentFileIDs;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)LICCnewConnectionIDOrError:(id *)a0;
- (void)LICCinvalidateFileNodesForConnection:(unsigned long long)a0;
- (void)LICCreleaseConnectionAllocation:(unsigned long long)a0;
- (void)rememberConnection:(id)a0 forID:(unsigned long long)a1;
- (void)LISMPUpdateUpdatedItem:(id)a0 name:(id)a1 interestedItem:(id)a2 interestedClients:(unsigned long long)a3;
- (void)LISMPUpdateUpdatedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)LISMPUpdateVolumeWideUpdatedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)LISMPUpdateDeletedName:(id)a0 item:(id)a1 interestedItem:(id)a2 how:(int)a3 interestedClients:(unsigned long long)a4;
- (void)LISMPUpdateDeletedItem:(id)a0 name:(id)a1 interestedItem:(id)a2 how:(int)a3 interestedClients:(unsigned long long)a4;
- (void)LISMPUpdateVolumeWideDeletedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)LISMPUpdateRenameFrom:(id)a0 fromName:(id)a1 fromID:(id)a2 intoItem:(id)a3 toName:(id)a4 overID:(id)a5 interestedClients:(unsigned long long)a6;
- (void)LISMPUpdateDone:(id)a0 interestedClients:(unsigned long long)a1;
- (void)LISMPUpdateItem:(id)a0 nameOrPath:(id)a1 interestedItem:(id)a2 interestedClients:(unsigned long long)a3 op:(int)a4;
- (void)LISMPinvalidateAllConnections;
- (void)LISMPUpdateHistoryResetItem:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)LISMPUpdateHistoryResetName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;

@end
