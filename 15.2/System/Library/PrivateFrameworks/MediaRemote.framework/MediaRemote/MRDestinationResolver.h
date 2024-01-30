@class MRDestination, NSString, MRAVEndpoint, MRPlayerPath, MSVVariableIntervalTimer, MRDestinationResolverDependencies, NSObject, MROrigin, MRAVEndpointObserver;
@protocol OS_dispatch_queue, MRDestinationResolverDelegate;

@interface MRDestinationResolver : NSObject <MREndpointObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) MRDestinationResolverDependencies *dependencies;
@property (nonatomic) BOOL resolving;
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL registeredForEndpointChanges;
@property (nonatomic) BOOL registeredForEndpointInvalidations;
@property (nonatomic) BOOL registeredForPlayerPathInvalidations;
@property (retain, nonatomic) id playerPathInvalidationObserver;
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver;
@property (retain, nonatomic) NSString *endpointObserverGroupUID;
@property (retain, nonatomic) MRDestination *originalDestination;
@property (retain, nonatomic) MRAVEndpoint *delegateEndpoint;
@property (retain, nonatomic) MROrigin *delegateOrigin;
@property (retain, nonatomic) MRPlayerPath *delegatePlayerPath;
@property (retain, nonatomic) MRAVEndpoint *resolvingEndpoint;
@property (retain, nonatomic) MRPlayerPath *resolvingPlayerPath;
@property (retain, nonatomic) MSVVariableIntervalTimer *reconRetryTimer;
@property (retain, nonatomic) MSVVariableIntervalTimer *connectionRetryTimer;
@property (weak, nonatomic) id<MRDestinationResolverDelegate> delegate;
@property (readonly, copy, nonatomic) MRDestination *destination;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resolvePartialDestination:(id)a0 level:(long long)a1 timeout:(double)a2 completion:(id /* block */)a3;
+ (void)resolveDestination:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
+ (void)resolvePartialDestination:(id)a0 level:(long long)a1 timeout:(double)a2 dependencies:(id)a3 completion:(id /* block */)a4;
+ (void)resolveDestination:(id)a0 level:(long long)a1 timeout:(double)a2 completion:(id /* block */)a3;

- (void)resolve;
- (BOOL)isDynamicEndpoint;
- (void)endpointDidDisconnect:(id)a0;
- (BOOL)isProactiveEndpoint;
- (void)handleEndpointInvalidated;
- (void)beginResolving;
- (BOOL)isUserSelectedEndpoint;
- (void)createPlayerPathForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (id)initWithDestination:(id)a0 label:(id)a1 dependencies:(id)a2;
- (void)onQueue_setResolvedPlayerPath:(id)a0;
- (void)onQueue_registerForPlayerPathInvalidationsForUnresolvedPlayerPath:(id)a0;
- (void)unregisterForPlayerPathInvalidations;
- (void)unregisterForEndpointInvalidations;
- (void)onQueue_setOrigin:(id)a0;
- (void)onQueue_setEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)handleEndpointChanged;
- (void)notifyDelegateOfOriginChange:(id)a0;
- (void)notifyDelegateOfEndpointChange:(id)a0;
- (void)unregisterForEndpointChanges;
- (void)resolveForResolvedPlayerPath:(id)a0;
- (void)resolvePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)handleActiveSystemEndpointChangedNotification:(id)a0;
- (void)resolveForEndpoint:(id)a0 client:(id)a1 player:(id)a2;
- (void)onQueue_clearStateForEndpoint;
- (void)resolveForOutputDeviceUID:(id)a0 client:(id)a1 player:(id)a2;
- (void)notifyDelegateOfError:(id)a0;
- (void)resolveForUnresolvedPlayerPath:(id)a0;
- (void)onQueue_clearStateForOutputDeviceUID;
- (void)onQueue_setUnresolvedPlayerPath:(id)a0;
- (void)notifyDelegateOfInvalidation;
- (void)notifyDelegateOfPlayerPathChange:(id)a0;
- (void)handlePlayerPathInvalidatedWithPlayerPath:(id)a0;
- (void)onQueue_clearStateForPlayerPath;
- (void)dealloc;
- (void)registerForEndpointChangesForOutputDeviceUID:(id)a0;
- (void)onQueue_retrieveEndpointForUID:(id)a0 completion:(id /* block */)a1;
- (void)onQueue_registerForEndpointInvalidations:(id)a0;
- (id)initWithDestination:(id)a0 label:(id)a1;

@end
