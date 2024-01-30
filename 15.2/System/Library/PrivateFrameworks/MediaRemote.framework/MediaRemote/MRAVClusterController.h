@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVClusterController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observers;
    NSString *_localPairingIdentity;
    NSString *_clusterUID;
    NSString *_clusterLeaderUID;
    unsigned long long _clusterStatus;
    unsigned int _clusterType;
    int _airplayClusterStatusNotificationToken;
}

@property (class, readonly, nonatomic) BOOL canBeClusterMember;

@property (readonly, nonatomic) BOOL needsCommandRedirection;
@property (readonly, nonatomic) unsigned long long clusterStatus;
@property (readonly, nonatomic) unsigned int clusterType;
@property (readonly, nonatomic) NSString *clusterLeaderUID;

+ (id)sharedController;
+ (id)getClusterUID;
+ (id)getClusterLeaderUID;
+ (unsigned int)getClusterType;

- (void)deviceInfoDidChangeNotification:(id)a0;
- (void)onQueue_setClusterStatus:(unsigned long long)a0;
- (void)onQueue_notifyObserversWithClusterType:(unsigned int)a0;
- (void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)a0;
- (void)registerObserver:(id)a0;
- (void)getClusterLeaderEndpoint:(id /* block */)a0;
- (void)getClusterStatus:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)onQueue_computeClusterStatus;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)updateClusterInformation;
- (void)onQueue_setClusterType:(unsigned int)a0;

@end
