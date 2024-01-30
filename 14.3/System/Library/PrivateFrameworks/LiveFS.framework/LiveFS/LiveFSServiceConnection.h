@class NSObject, LiveFSServiceMountPoint, NSXPCConnection;
@protocol NSFileProviderLiveItemImplementation, OS_dispatch_queue;

@interface LiveFSServiceConnection : NSObject <NSFileProviderLiveItemCore, NSFileProviderLiveItemConnectionMaker> {
    LiveFSServiceMountPoint<NSFileProviderLiveItemImplementation> *mount;
    NSXPCConnection *ourConnection;
    NSObject<OS_dispatch_queue> *setUpdateInterestQueue;
}

@property (readonly) unsigned long long ourID;

+ (id)newExportObjectForObject:(id)a0 connection:(id)a1 error:(id *)a2;
+ (id)newConnectionForMount:(id)a0 connection:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionWasInvalidated;
- (void)connectionWasInterrupted;
- (void)LIGetRootFileHandle:(id /* block */)a0;
- (void)LIGetRootFileHandleWithError:(id /* block */)a0;
- (void)LIGetDomainAttributes:(id /* block */)a0;
- (void)LIGetAttr:(id)a0 reply:(id /* block */)a1;
- (void)LISetAttr:(id)a0 setAttrs:(id)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LILookup:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)LIReclaim:(id)a0 reply:(id /* block */)a1;
- (void)LICreate:(id)a0 named:(id)a1 withAttrs:(id)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIMakeDir:(id)a0 named:(id)a1 withAttrs:(id)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIMakeSymLink:(id)a0 named:(id)a1 withContents:(id)a2 andAttrs:(id)a3 forPID:(int)a4 reply:(id /* block */)a5;
- (void)LIMakeLink:(id)a0 named:(id)a1 inDirectory:(id)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIMakeClone:(id)a0 named:(id)a1 inDirectory:(id)a2 withAttrs:(id)a3 andFlags:(unsigned int)a4 forPID:(int)a5 reply:(id /* block */)a6;
- (void)LIOpen:(id)a0 withMode:(int)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LIClose:(id)a0 withMode:(int)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LIRead:(id)a0 atOffset:(unsigned long long)a1 withBuffer:(id)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIRead:(id)a0 length:(unsigned long long)a1 atOffset:(unsigned long long)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIWrite:(id)a0 atOffset:(unsigned long long)a1 withBuffer:(id)a2 forPID:(int)a3 reply:(id /* block */)a4;
- (void)LIReadLink:(id)a0 reply:(id /* block */)a1;
- (void)LIRemove:(id)a0 name:(id)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LIRemoveDir:(id)a0 name:(id)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LIRename:(id)a0 name:(id)a1 toDir:(id)a2 andName:(id)a3 withFlags:(unsigned int)a4 forPID:(int)a5 reply:(id /* block */)a6;
- (void)LIReadDir:(id)a0 intoBuffer:(id)a1 forCookie:(unsigned long long)a2 andVerifier:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)LIReadDirAndAttrs:(id)a0 intoBuffer:(id)a1 forCookie:(unsigned long long)a2 andVerifier:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)LIReadDir:(id)a0 amount:(unsigned long long)a1 forCookie:(unsigned long long)a2 andVerifier:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)LIReadDirAndAttrs:(id)a0 amount:(unsigned long long)a1 forCookie:(unsigned long long)a2 andVerifier:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)LIStatFS:(id)a0 reply:(id /* block */)a1;
- (void)LIPathConf:(id)a0 reply:(id /* block */)a1;
- (void)LIGetFsAttr:(id)a0 name:(id)a1 reply:(id /* block */)a2;
- (void)LISetFsAttr:(id)a0 name:(id)a1 value:(id)a2 reply:(id /* block */)a3;
- (void)LIGetXattr:(id)a0 name:(id)a1 forPID:(int)a2 reply:(id /* block */)a3;
- (void)LISetXattr:(id)a0 name:(id)a1 value:(id)a2 how:(int)a3 forPID:(int)a4 reply:(id /* block */)a5;
- (void)LIListXattrs:(id)a0 forPID:(int)a1 reply:(id /* block */)a2;
- (void)LISetUpdateInterest:(id)a0 interest:(BOOL)a1 reply:(id /* block */)a2;
- (void)LISearch:(id)a0 token:(id)a1 criteria:(id)a2 resumeAt:(id)a3 maxData:(unsigned int)a4 maxDelay:(double)a5 initialCredits:(unsigned int)a6 reply:(id /* block */)a7;
- (void)LISearchReplenishCredits:(id)a0 credits:(unsigned int)a1 reply:(id /* block */)a2;
- (void)LISearchAbort:(id)a0 reply:(id /* block */)a1;
- (void)LIAccessCheck:(id)a0 requestedAccess:(unsigned int)a1 reply:(id /* block */)a2;
- (void)LIVerifyExistenceWithFileIDs:(id)a0 reply:(id /* block */)a1;
- (void)LIGetParentsAndAttributesForFileIDs:(id)a0 reply:(id /* block */)a1;
- (void)LIGetPathsAndAttributesForFileIDs:(id)a0 reply:(id /* block */)a1;
- (void)scrubOurClientId;
- (id)initForMount:(id)a0 connection:(id)a1 error:(id *)a2;
- (id)sanitizedAttrsForNewObjectAttrs:(id)a0 forType:(unsigned int)a1;

@end
