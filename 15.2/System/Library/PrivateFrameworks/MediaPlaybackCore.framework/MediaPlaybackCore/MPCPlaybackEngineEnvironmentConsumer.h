@class NSString, MPCPlaybackEngine;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlaybackEngineEnvironmentConsumer : NSObject <MPCPlaybackEngineEventObserving, ICEnvironmentMonitorObserver, MPCPlaybackEngineEventConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _reachability;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)environmentMonitorDidChangeNetworkType:(id)a0;
- (void)engine:(id)a0 didChangeAccounts:(id)a1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)_snapshotDeviceWithEvent:(id)a0 nudge:(int)a1;
- (void)_devicePrivateListeningDidChange:(id)a0;
- (void)_snapshotDeviceAtTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a0;
- (void)unsubscribeFromEventStream:(id)a0;
- (void)_snapshotNetworkTypeWithEvent:(id)a0 nudge:(int)a1;
- (void)_addEventForAccountIdentifier:(id)a0 cursor:(id)a1 event:(id)a2 nudge:(int)a3;
- (void).cxx_destruct;
- (void)_snapshotNetworkReachabilityWithEvent:(id)a0 nudge:(int)a1;
- (void)_snapshotAccount:(id)a0 eventType:(id)a1 atTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2;
- (id)initWithPlaybackEngine:(id)a0;
- (void)_snapshotAccount:(id)a0 eventType:(id)a1 event:(id)a2 nudge:(int)a3;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)_snapshotNetworkTypeAtTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a0;
- (void)_snapshotNetworkReachabilityAtTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a0 force:(BOOL)a1;
- (void)subscribeToEventStream:(id)a0;
- (void)_applicationWillTerminate:(id)a0;

@end
