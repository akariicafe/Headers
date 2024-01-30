@class NSRecursiveLock, NSMapTable, NSPointerArray, NSObject;
@protocol OS_dispatch_queue;

@interface MXSessionManagerSidekick : NSObject {
    NSPointerArray *mCoreSessionList;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMapTable *remoteDeviceIDToCoreSessionIDList;
@property (readonly, nonatomic) NSMapTable *coreSessionIDToMXSessionList;
@property (readonly, nonatomic) NSRecursiveLock *recursiveLock;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)unregisterMXCoreSessionSidekick:(id)a0;
- (void)registerMXCoreSessionSidekick:(id)a0;
- (BOOL)isSomeOtherSessionPlaying:(id)a0;
- (id)copyMXSessionList:(id)a0;
- (void)dumpCoreSessionList;
- (void)dumpVersionNumbersFromSidekickSessionBehavioursPlist;
- (id)copyMXCoreSessionListForRemoteDeviceID:(id)a0;

@end
