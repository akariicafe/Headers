@class NSString, NSSet;

@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {
    NSSet *_disabledBundleIDs;
    NSSet *_knownBundleIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cloudSyncTCCDisabledForContainerMeta:(id)a0;
- (id)fetchContainerForURL:(id)a0;
- (id)fetchAllContainersByIDWithError:(id *)a0;
- (BOOL)canFetchAllContainersByID;
- (void).cxx_destruct;
- (id)init;
- (unsigned short)br_capabilityToMoveFromURL:(id)a0 toNewParent:(id)a1 error:(id *)a2;
- (id)itemIDForURL:(id)a0 error:(id *)a1;
- (unsigned short)br_capabilityToMoveFromLookup:(id)a0 toNewParent:(id)a1 session:(id)a2 error:(id *)a3;

@end
