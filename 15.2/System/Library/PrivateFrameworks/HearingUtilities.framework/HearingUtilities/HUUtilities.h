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

+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;

- (BOOL)currentRouteSupportsBackgroundSounds;
- (void)mediaServerDied;
- (BOOL)liveListenRouteSelected;
- (BOOL)deviceIsTinker;
- (void)registerNotifications;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;
- (id)currentPickableAudioRoutesIfExist;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (void)updateWirelessSplitterState;
- (void)updateHearingFeatureUsage;
- (unsigned long long)backgroundSoundsRouteDecision;
- (BOOL)hearingAidStreamSelected;
- (id)currentPickableAudioRoutes;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hearingAidRouteAvailable;
- (void)clearAudioRoutes;
- (void)dealloc;
- (BOOL)wirelessSplitterEnabled;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;

@end
