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

+ (BOOL)shouldUseMultideviceV3;
+ (id)sharedUtilities;
+ (id)XDCObjectFromObject:(id)a0;
+ (id)objectFromXDCObject:(id)a0;

- (BOOL)currentRouteSupportsBackgroundSounds;
- (id)currentPickableAudioRoutes;
- (void)mediaServerDied;
- (void)registerNotifications;
- (unsigned long long)backgroundSoundsRouteDecision;
- (void)updateWirelessSplitterState;
- (id)liveListenDevice;
- (void)checkAudioPlayingWithQueue:(id)a0 origin:(void *)a1 andCompletion:(id /* block */)a2;
- (void)updateHearingFeatureUsage;
- (void)addHearingFeatureUsage:(unsigned long long)a0;
- (BOOL)wirelessSplitterEnabled;
- (void)dealloc;
- (id)currentPickableAudioRoutesIfExist;
- (void)pauseNowPlaying:(BOOL)a0 withQueue:(id)a1 andCompletion:(id /* block */)a2;
- (BOOL)liveListenRouteSelected;
- (void)clearAudioRoutes;
- (BOOL)deviceIsTinker;
- (BOOL)hearingAidStreamSelected;
- (void)pickableAudioRoutesDidChange:(id)a0;
- (id)init;
- (BOOL)oldRoutes:(id)a0 equalToNewRoutes:(id)a1;
- (BOOL)hearingAidRouteAvailable;
- (void).cxx_destruct;
- (void)checkAudioPlayingWithQueue:(id)a0 andCompletion:(id /* block */)a1;

@end
