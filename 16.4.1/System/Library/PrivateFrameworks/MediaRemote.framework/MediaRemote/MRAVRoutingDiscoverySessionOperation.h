@class NSString, NSArray, MRAVRoutingDiscoverySession, NSMutableSet, NSDate, NSObject, MRBlockGuard;
@protocol OS_dispatch_queue;

@interface MRAVRoutingDiscoverySessionOperation : NSObject {
    id /* block */ _outputDeviceDiscoveredHandler;
    id /* block */ _endpointDiscoveredHandler;
    id /* block */ _finishHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableSet *_discoveredEndpoints;
    NSMutableSet *_discoveredOutputDevices;
    NSMutableSet *_discoveredTargetOutputDeviceUIDs;
    MRAVRoutingDiscoverySession *_session;
    MRBlockGuard *_guard;
    NSDate *_startDate;
    NSString *_requestID;
}

@property (readonly, copy, nonatomic) NSArray *outputDeviceUIDs;
@property (copy, nonatomic) id /* block */ outputDeviceDiscoveredHandler;
@property (copy, nonatomic) id /* block */ endpointDiscoveredHandler;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)cancelWithError:(id)a0;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)_notifyDiscoveredEndpoint:(id)a0 outputDevice:(id)a1 forTargetOutputDevice:(id)a2;
- (void)executeWithTimeout:(double)a0;
- (id)initWithOutputDeviceUIDs:(id)a0;

@end
