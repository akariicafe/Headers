@class NSHashTable, NSString, NSArray, AVOutputContext, NSMutableDictionary, NSDictionary, BSAtomicSignal, NSObject, NSNotificationCenter;
@protocol OS_dispatch_queue, SBAVSystemControllerDataProviding;

@interface SBAVSystemControllerCache : NSObject {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSNotificationCenter *_notificationCenter;
    id /* block */ _dataProviderInitializer;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_queue_observers;
    AVOutputContext *_queue_outputContext;
    id<SBAVSystemControllerDataProviding> _queue_dataProvider;
    NSMutableDictionary *_notificationToHandlerMap;
    NSMutableDictionary *_notificationToBackgroundQueryCancellationSignalMap;
    BOOL _queue_initialized;
    BSAtomicSignal *_queue_serverDeathSignal;
    BOOL _queue_fullyMuted;
    BOOL _queue_audioSessionPlaying;
    NSString *_queue_activeAudioRoute;
    NSDictionary *_queue_activeAudioRouteInfo;
    NSArray *_queue_pickableRoutes;
    NSArray *_queue_activeOutputDevices;
    BOOL _outputContextSupportsMultipleOutputDevices;
    BOOL _queue_airplayDisplayActive;
    NSObject<OS_dispatch_queue> *_backgroundQueryQueue;
}

@property (readonly, nonatomic, getter=isFullyMuted) BOOL fullyMuted;
@property (readonly, nonatomic, getter=isAudioSessionPlaying) BOOL audioSessionPlaying;
@property (readonly, copy, nonatomic) NSString *activeAudioRoute;
@property (readonly, copy, nonatomic) NSDictionary *activeAudioRouteInfo;
@property (readonly, copy, nonatomic) NSArray *pickableRoutes;
@property (readonly, copy, nonatomic) NSArray *activeOutputDevices;
@property (readonly, nonatomic, getter=isAirplayDisplayActive) BOOL airplayDisplayActive;

+ (id)sharedInstance;

- (void)_queue_updatePickableRoutesFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updateActiveAudioRouteFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)activeAudioRouteInfo;
- (void)_queue_rebuildCache;
- (void)fetchPickableRoutesWithCompletion:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)_queue_updateActiveOutputDevicesFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)dealloc;
- (id)_queue_backgroundQueryCancellationSignalForNotificationCreatingIfNecessary:(id)a0;
- (id)initWithCallOutQueue:(id)a0 notificationCenter:(id)a1 dataProviderInitializer:(id /* block */)a2;
- (void)_serverDied:(id)a0;
- (void)_queue_updateAudioSessionPlayingFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_updateAirplayDisplayActiveFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void)_queue_notifyObserversWithBlock:(id /* block */)a0;
- (id)_queryActiveOutputDevicesFromContext:(id)a0;
- (id)init;
- (id)activeAudioRoute;
- (id)activeOutputDevices;
- (void)_queue_signalBackgroundQueryCancellationForNotification:(id)a0;
- (id)pickableRoutes;
- (void)_queue_updateFullyMutedFromNotification:(id)a0 allowingBackgroundQueries:(BOOL)a1 backgroundQueriesCancelledBlock:(id /* block */)a2 cancelBackgroundQueriesBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_receiveUpdatedValueFromNotification:(id)a0;

@end
