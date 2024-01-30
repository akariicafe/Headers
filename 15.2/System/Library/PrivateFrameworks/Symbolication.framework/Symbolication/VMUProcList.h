@class NSLock, NSMutableDictionary;

@interface VMUProcList : NSObject {
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
}

- (id)allPIDs;
- (BOOL)update;
- (void).cxx_destruct;
- (id)init;
- (id)allNames;
- (unsigned long long)count;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (id)newestProcInfoWithName:(id)a0;
- (void)setProcInfos:(id)a0;
- (void)addProcInfo:(id)a0;
- (void)removeProcInfo:(id)a0;
- (id)allProcInfos;
- (id)allPathNames;
- (id)newestProcInfo;
- (id)procInfoWithPID:(int)a0;

@end
