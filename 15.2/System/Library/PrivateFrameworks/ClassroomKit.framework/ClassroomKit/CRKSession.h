@class CRKRemoteEndpoint, NSDictionary, CRKTransportPreflightOperation, CATStateMachine, CATTransport;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject {
    double mCurrentBackoffInterval;
}

@property (readonly, nonatomic) id<CRKGrowthFunction> backoffGrowthFunction;
@property (retain, nonatomic) CATStateMachine *stateMachine;
@property (retain, nonatomic) CATTransport *transport;
@property (nonatomic) double lostBeaconTimeout;
@property (nonatomic) double willLoseBeaconWarningTimeout;
@property (retain, nonatomic) CRKTransportPreflightOperation *transportPreflightOperation;
@property (weak, nonatomic) id<CRKSessionDelegate> delegate;
@property (readonly) CRKRemoteEndpoint *endpoint;
@property (nonatomic) BOOL requiresBeacon;
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;

- (void)connect;
- (void)rejected;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)didConnect;
- (void)registerDefaults;
- (void)foundBeacon;
- (void)lostBeacon;
- (void)enterOutOfRange;
- (void)enterNoNetwork;
- (void)delegateDidLoseBeacon;
- (void)enterBackoffCanConnect;
- (void)exitBackoffCanConnect;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidBecomeNotConnectableAndDidLoseBeacon;
- (void)delegateDidBecomeNotConnectable;
- (void)tryConnecting;
- (void)cancelConnectionAttempt;
- (void)delegateConnected;
- (void)resetBackoff;
- (void)delegateDisconnected;
- (void)delegateInvalidated;
- (void)delegateWillLoseBeacon;
- (void)failedToConnect;
- (id)studentSocketOptions;
- (void)startPreflightingTransport:(id)a0;
- (void)stopPreflightingTransport;
- (void)backoffDidFinish;
- (void)transportPreflightOperationDidFinish:(id)a0;
- (void)processFinishedTransportPreflightOperation:(id)a0;
- (void)localWiFiBecameAvailable;
- (void)localWiFiBecameUnavailable;
- (void)lostConnection;

@end
