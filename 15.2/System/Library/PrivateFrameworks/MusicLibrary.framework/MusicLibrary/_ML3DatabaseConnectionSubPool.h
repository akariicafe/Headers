@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _ML3DatabaseConnectionSubPool : NSObject {
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    long long _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
}

@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) unsigned long long maxConcurrentConnections;
@property (nonatomic) BOOL useReadOnlyConnections;
@property (nonatomic) BOOL useDistantConnections;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) long long connectionsProfilingLevel;

- (void)checkInConnection:(id)a0;
- (id)initWithDatabasePath:(id)a0 maxConcurrentConnections:(unsigned long long)a1;
- (id)checkoutConnection:(BOOL *)a0;
- (void)checkInConnection:(id)a0 returnToPool:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_handleDatabaseDeletion;
- (void)handleDiagnostic:(id)a0;
- (void)dealloc;
- (void)closeConnectionsAndWaitForBusyConnections:(BOOL)a0;

@end
