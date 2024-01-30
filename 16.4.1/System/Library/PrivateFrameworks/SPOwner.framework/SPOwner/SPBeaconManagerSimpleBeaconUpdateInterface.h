@class NSArray, NSString, FMXPCSession, NSObject, SPSimpleBeaconContext;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol;

@interface SPBeaconManagerSimpleBeaconUpdateInterface : NSObject <SPSimpleBeaconUpdateClientXPCProtocol>

@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (copy, nonatomic) NSArray *simpleBeacons;
@property (copy, nonatomic) id /* block */ collectionDifferenceBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) SPSimpleBeaconContext *context;
@property (nonatomic) BOOL reconnectionUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)exportedInterface;

- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)stopUpdatingSimpleBeaconsWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)setSimpleBeaconDifferenceBlock:(id /* block */)a0;
- (void)_processRemovals:(id)a0;
- (void)handleReconnection;
- (void)receivedSimpleBeaconRemovals:(id)a0;
- (void)receivedSimpleBeaconUpdates:(id)a0;
- (void)startUpdatingSimpleBeaconsWithContext:(id)a0 completion:(id /* block */)a1;

@end
