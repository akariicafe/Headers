@class NSMapTable;

@interface LiveFSVolume : NSObject <LiveFSConnectionCoordination, LiveFSVolumeImplementation> {
    unsigned long long validConnections;
    int connectionCount;
    NSMapTable *_currentConnections;
}

@property unsigned long long workingSetInterest;
@property (readonly) BOOL renameChangesFileID;
@property (readonly) BOOL hasPersistentFileIDs;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateAllConnections;
- (void)otherAttributeOf:(id)a0 named:(id)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)fileAttributes:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)readDirectory:(id)a0 amount:(unsigned long long)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readDirectoryAndAttributes:(id)a0 amount:(unsigned long long)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)xattrOf:(id)a0 named:(id)a1 forPID:(int)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)LISMPUpdateItem:(id)a0 nameOrPath:(id)a1 interestedItem:(id)a2 interestedClients:(unsigned long long)a3 op:(int)a4;
- (void)abortAllClientSearchesFor:(unsigned long long)a0;
- (void)abortSearch:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)blockmapFile:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startIO:(int)a2 flags:(unsigned int)a3 operationID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)checkAccessTo:(id)a0 requestedAccess:(unsigned int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)close:(id)a0 keepingMode:(int)a1 forPID:(int)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)createIn:(id)a0 named:(id)a1 attributes:(id)a2 forPID:(int)a3 andClient:(unsigned long long)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)deletedItem:(id)a0 name:(id)a1 interestedItem:(id)a2 how:(int)a3 interestedClients:(unsigned long long)a4;
- (void)deletedName:(id)a0 item:(id)a1 interestedItem:(id)a2 how:(int)a3 interestedClients:(unsigned long long)a4;
- (void)endIO:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 status:(int)a2 flags:(unsigned int)a3 operationID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)fetchVolumeMachPortLabeled:(id)a0 forClient:(unsigned long long)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)historyResetItem:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)historyResetName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)invalidateFileNodesForConnection:(unsigned long long)a0;
- (void)itemRenamedIn:(id)a0 named:(id)a1 originalID:(id)a2 intoDirectory:(id)a3 newName:(id)a4 atopItem:(id)a5 interestedClients:(unsigned long long)a6;
- (void)itemUpdatesDone:(id)a0 interestedClients:(unsigned long long)a1;
- (void)listXattrsOf:(id)a0 forPID:(int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)lookupin:(id)a0 name:(id)a1 forClient:(unsigned long long)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)makeCloneOf:(id)a0 named:(id)a1 inDirectory:(id)a2 attributes:(id)a3 usingFlags:(unsigned int)a4 forPID:(int)a5 andClient:(unsigned long long)a6 requestID:(unsigned long long)a7 reply:(id /* block */)a8;
- (void)makeDirectoryIn:(id)a0 named:(id)a1 attributes:(id)a2 forPID:(int)a3 andClient:(unsigned long long)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)makeLinkOf:(id)a0 named:(id)a1 inDirectory:(id)a2 forPID:(int)a3 andClient:(unsigned long long)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)makeSymLinkIn:(id)a0 named:(id)a1 contents:(id)a2 attributes:(id)a3 forPID:(int)a4 andClient:(unsigned long long)a5 requestID:(unsigned long long)a6 reply:(id /* block */)a7;
- (unsigned long long)newConnectionIDOrError:(id *)a0;
- (void)open:(id)a0 withMode:(int)a1 forPID:(int)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)parentsAndAttributesForItemsByID:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)pathConfiguration:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)readDirectory:(id)a0 intoBuffer:(id)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readDirectoryAndAttributes:(id)a0 intoBuffer:(id)a1 cookie:(unsigned long long)a2 verifier:(unsigned long long)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readFrom:(id)a0 atOffset:(unsigned long long)a1 intoBuffer:(id)a2 forPID:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readFrom:(id)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2 forPID:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;
- (void)readLinkOf:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)reclaim:(id)a0 forClient:(unsigned long long)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)releaseConnectionAllocation:(unsigned long long)a0;
- (void)rememberConnection:(id)a0 forID:(unsigned long long)a1;
- (void)removeDirectory:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 forPID:(int)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)removeItem:(id)a0 from:(id)a1 named:(id)a2 usingFlags:(int)a3 forPID:(int)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)renameItemIn:(id)a0 named:(id)a1 toDirectory:(id)a2 newName:(id)a3 usingFlags:(unsigned int)a4 forPID:(int)a5 requestID:(unsigned long long)a6 reply:(id /* block */)a7;
- (void)replenishSearchCreditsFor:(id)a0 credits:(unsigned int)a1 requestID:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)rootFileHandleForClient:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)search:(id)a0 token:(id)a1 criteria:(id)a2 returnProxy:(id)a3 forClient:(unsigned long long)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)setFileAttributesOf:(id)a0 to:(id)a1 forPID:(int)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)setOtherAttributeOf:(id)a0 named:(id)a1 value:(id)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)setUpdateInterest:(id)a0 interest:(BOOL)a1 forClient:(unsigned long long)a2 requestID:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)setXattrOf:(id)a0 named:(id)a1 value:(id)a2 how:(int)a3 forPID:(int)a4 requestID:(unsigned long long)a5 reply:(id /* block */)a6;
- (void)updatedItem:(id)a0 name:(id)a1 interestedItem:(id)a2 interestedClients:(unsigned long long)a3;
- (void)updatedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)verifyItemExistenceByIDs:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)volumeStatistics:(id)a0 requestID:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)volumeWideDeletedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)volumeWideUpdatedName:(id)a0 interestedItem:(id)a1 interestedClients:(unsigned long long)a2;
- (void)writeTo:(id)a0 atOffset:(unsigned long long)a1 fromBuffer:(id)a2 forPID:(int)a3 requestID:(unsigned long long)a4 reply:(id /* block */)a5;

@end
