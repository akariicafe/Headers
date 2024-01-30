@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FPDaemonOperationManager : NSObject {
    BOOL _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;

- (void)wakeUp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)generateLocalOperationID;
- (void)_updateDaemonOperations;
- (void)_receiveLongLivedOperation:(id)a0 info:(id)a1;
- (void)_enumerateNewDaemonOperationsWithHandler:(id /* block */)a0;

@end
