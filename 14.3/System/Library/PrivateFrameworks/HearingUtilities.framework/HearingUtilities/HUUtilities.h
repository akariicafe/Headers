@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HUUtilities : NSObject {
    NSDictionary *_pickableRoutes;
    int _wirelessSplitterNotifyToken;
    BOOL _wirelessSplitterEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _routingLock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *routingQueue;
@property (nonatomic) BOOL takingConnection;

+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;
+ (id)sharedUtilities;

- (void)mediaServerDied;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (void)dealloc;
- (void)updateWirelessSplitterState;
- (BOOL)wirelessSplitterEnabled;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (void)updateHearingFeatureUsage;
- (BOOL)liveListenRouteSelected;
- (void)clearAudioRoutes;
- (void)registerNotifications;
- (id)currentPickableAudioRoutes;
- (BOOL)hearingAidRouteAvailable;
- (BOOL)hearingAidStreamSelected;
- (id)currentPickableAudioRoutesIfExist;

@end
