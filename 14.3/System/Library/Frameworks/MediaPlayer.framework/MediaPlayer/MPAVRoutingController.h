@class NSObject, NSString, MPAVRoutingDataSource, NSArray, NSSet, MPAVRoute, MPAVRoutingControllerSelectionQueue;
@protocol MPAVRoutingControllerDelegate, OS_dispatch_queue, MPAVOutputDevicePlaybackDataSource;

@interface MPAVRoutingController : NSObject <_MPStateDumpPropertyListTransformable> {
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    long long _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    MPAVRoutingControllerSelectionQueue *_routingControllerSelectionQueue;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, nonatomic) MPAVRoute *systemRoute;

@property (retain, nonatomic) MPAVRoute *legacyCachedRoute;
@property (weak, nonatomic) id<MPAVOutputDevicePlaybackDataSource> playbackDataSource;
@property (copy, nonatomic) NSString *presentedBundleID;
@property (copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic) BOOL representsLongFormVideoContent;
@property (weak, nonatomic) id<MPAVRoutingControllerDelegate> delegate;
@property (readonly, nonatomic) MPAVRoutingDataSource *dataSource;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long discoveryMode;
@property (nonatomic) BOOL fetchAvailableRoutesSynchronously;
@property (readonly, nonatomic) long long externalScreenType;
@property (readonly, copy, nonatomic) NSArray *availableRoutes;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long routeTypes;
@property (readonly, nonatomic) MPAVRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (readonly, nonatomic) NSSet *pendingPickedRoutes;
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property (readonly, nonatomic) BOOL hasPendingPickedRoutes;
@property (readonly, nonatomic) BOOL volumeControlIsAvailable;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedWorkerQueue;
+ (id)_iconImageForRoute:(id)a0;
+ (id)_iconImageNameForDeviceSubtypes:(id)a0 route:(id)a1;
+ (id)_iconImageNameForClusterRoute:(id)a0;
+ (void)setActiveRoute:(id)a0 completion:(id /* block */)a1;
+ (id)_currentDeviceRoutingIconImage;
+ (void)setActiveRoute:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
+ (BOOL)bundleIdRepresentsLongFormVideoContent:(id)a0;
+ (id)_iconNameForRoute:(id)a0;
+ (void)getActiveRouteWithCompletion:(id /* block */)a0;
+ (void)_getActiveRouteWithTimeout:(double)a0 discoveredRoutes:(id)a1 completion:(id /* block */)a2;
+ (id)_iconImageForRoutes:(id)a0;
+ (id)systemRouteWithContextUID:(id)a0;
+ (id)_currentDeviceRoutingIconImageName;
+ (id)_iconImageForIdentifier:(id)a0;
+ (void)getActiveRouteWithTimeout:(double)a0 completion:(id /* block */)a1;

- (id)updatePickedRoutes;
- (void)unpickTVRoutes;
- (id)_stateDumpObject;
- (void)_setExternalScreenType:(long long)a0;
- (long long)_volumeControlStateForPickedRoute;
- (id)init;
- (BOOL)receiverRouteIsPicked;
- (void).cxx_destruct;
- (BOOL)addPickedRoute:(id)a0;
- (BOOL)routeIsLeaderOfEndpoint:(id)a0;
- (void)_unregisterNotifications;
- (void)_clearLegacyCachedRoute;
- (void)dealloc;
- (id)cachedRoutes;
- (void)_syncUpdateRoutes;
- (BOOL)speakerRouteIsPicked;
- (BOOL)pickSpeakerRoute;
- (void)_activeAudioRouteDidChangeNotification:(id)a0;
- (BOOL)removePickedRoute:(id)a0;
- (long long)_externalScreenType:(BOOL *)a0;
- (void)_promptForHijackIfNeeded:(id)a0 handler:(id /* block */)a1;
- (id)videoRouteForRoute:(id)a0;
- (id)_pickedRouteInArray:(id)a0;
- (BOOL)_deviceAvailabilityOverrideState;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)airtunesRouteIsPicked;
- (BOOL)wirelessDisplayRoutesAvailable;
- (void)selectRoutes:(id)a0 operation:(long long)a1 completion:(id /* block */)a2;
- (void)clearCachedRoutes;
- (void)_externalScreenTypeDidChangeNotification:(id)a0;
- (void)unpickAirPlayScreenRouteWithCompletion:(id /* block */)a0;
- (id)updateAvailableRoutes;
- (void)_updateCachedRoutes;
- (void)_onQueueSetExternalScreenType:(long long)a0;
- (BOOL)removePickedRoute:(id)a0 completion:(id /* block */)a1;
- (void)_registerNotifications;
- (void)_setVolumeControlStateForPickedRoute:(long long)a0;
- (void)_pickableRoutesDidChangeNotification:(id)a0;
- (id)cachedPickedRoutes;
- (BOOL)pickRoute:(id)a0 withPassword:(id)a1 completion:(id /* block */)a2;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)a0;
- (id)_pickedRoutesInArray:(id)a0;
- (BOOL)_pickRoute:(id)a0 completion:(id /* block */)a1;
- (void)setCachedRoutes:(id)a0;
- (void)getActiveRouteWithTimeout:(double)a0 completion:(id /* block */)a1;
- (id)initWithDataSource:(id)a0 name:(id)a1;
- (void)_mediaServerDiedNotification:(id)a0;
- (BOOL)routeOtherThanHandsetAvailable;
- (void)_routeStatusDidChangeNotification:(id)a0;
- (BOOL)pickRoute:(id)a0;
- (BOOL)handsetRouteIsPicked;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)a0;
- (BOOL)pickHandsetRoute;
- (id)initWithName:(id)a0;
- (BOOL)routeIsPendingPick:(id)a0;
- (BOOL)addPickedRoute:(id)a0 completion:(id /* block */)a1;
- (BOOL)pickRoute:(id)a0 withPassword:(id)a1;
- (void)selectRoute:(id)a0 operation:(long long)a1 completion:(id /* block */)a2;
- (void)_sendDelegateFailedToPickRouteWithError:(id)a0;
- (BOOL)routeOtherThanHandsetAndSpeakerAvailable;
- (BOOL)pickBestDeviceRoute;
- (void)_sendDelegatePickedRoutesChanged;
- (BOOL)wirelessDisplayRouteIsPicked;

@end
