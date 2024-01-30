@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MRAVClusterController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observers;
    NSString *_localPairingIdentity;
    NSString *_clusterUID;
    NSString *_clusterLeaderUID;
    unsigned int _clusterType;
    unsigned long long _previousClusterStatus;
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

- (void)registerObserver:(id)a0;
- (void)onQueue_notifyObserversWithClusterStatus:(unsigned long long)a0;
- (void)getClusterStatus:(id /* block */)a0;
- (void)getClusterLeaderEndpoint:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)deviceInfoDidChangeNotification:(id)a0;
- (void)updateClusterInformation;

@end
