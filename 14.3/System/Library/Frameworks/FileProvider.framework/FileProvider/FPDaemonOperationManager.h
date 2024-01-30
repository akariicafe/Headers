@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FPDaemonOperationManager : NSObject {
    BOOL _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)generateLocalOperationID;
- (void)dealloc;
- (void)_updateDaemonOperations;
- (void)_receiveLongLivedOperation:(id)a0 info:(id)a1;
- (void)_enumerateNewDaemonOperationsWithHandler:(id /* block */)a0;
- (void)wakeUp;

@end
