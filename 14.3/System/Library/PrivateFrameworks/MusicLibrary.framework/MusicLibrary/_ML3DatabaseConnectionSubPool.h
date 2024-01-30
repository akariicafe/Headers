@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
}

@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) unsigned long long maxConcurrentConnections;
@property (nonatomic) BOOL useReadOnlyConnections;
@property (nonatomic) BOOL useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;

- (void)checkInConnection:(id)a0;
- (void)closeConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDatabaseDeletion;
- (void)dealloc;
- (void)handleDiagnostic:(id)a0;
- (id)checkoutConnection:(BOOL *)a0;
- (id)initWithDatabasePath:(id)a0 maxConcurrentConnections:(unsigned long long)a1;
- (void)checkInConnection:(id)a0 returnToPool:(BOOL)a1;

@end
