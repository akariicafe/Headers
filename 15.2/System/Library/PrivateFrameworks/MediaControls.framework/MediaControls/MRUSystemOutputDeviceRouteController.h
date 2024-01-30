@class MPAVOutputDeviceRoute, NSString, CXCallObserver, NSHashTable, MPAVEndpointRoute, MRUOutputDeviceAsset;

@interface MRUSystemOutputDeviceRouteController : NSObject <CXCallObserverDelegate>

@property (class, readonly, nonatomic) MRUSystemOutputDeviceRouteController *sharedController;

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) MPAVEndpointRoute *systemRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *systemOutputDeviceRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *primaryOutputDeviceRoute;
@property (readonly, nonatomic) MPAVOutputDeviceRoute *secondaryOutputDeviceRoute;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAsset;
@property (readonly, nonatomic) MRUOutputDeviceAsset *systemOutputDeviceAssetWithInCall;
@property (readonly, nonatomic) MRUOutputDeviceAsset *primaryOutputDeviceAsset;
@property (readonly, nonatomic) MRUOutputDeviceAsset *secondaryOutputDeviceAsset;
@property (readonly, nonatomic) BOOL isSplitRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputContextDescription;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCallActive;
- (void)routeDidChangeNotification;
- (void)updateOutputDevices;
- (id)outputDeviceAssetForOutputDeviceRoute:(id)a0;
- (long long)outputDeviceAssetTypeForDeviceRoute:(id)a0;
- (long long)outputDeviceAssetTypeForAirPlayRoute:(id)a0;
- (long long)outputDeviceAssetTypeForClusterRoute:(id)a0;

@end
