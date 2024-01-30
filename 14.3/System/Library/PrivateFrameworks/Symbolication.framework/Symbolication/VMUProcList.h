@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)update;
- (id)allPIDs;
- (BOOL)appsOnly;
- (unsigned long long)count;
- (BOOL)ownedOnly:(BOOL)a0;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (void)addProcInfo:(id)a0;
- (id)newestProcInfoWithName:(id)a0;
- (void)setProcInfos:(id)a0;
- (void)removeProcInfo:(id)a0;
- (void)setOwnedOnly:(BOOL)a0;
- (void)setAppsOnly:(BOOL)a0;
- (id)allProcInfos;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)procInfoWithPID:(int)a0;
- (id)allNames;

@end
