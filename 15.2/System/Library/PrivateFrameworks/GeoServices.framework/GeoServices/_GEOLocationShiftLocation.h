@class GEOLatLng, NSObject, GEOApplicationAuditToken;
@protocol OS_dispatch_queue;

@interface _GEOLocationShiftLocation : NSObject {
    id /* block */ _completionHandler;
    id /* block */ _errorHandler;
    id /* block */ _mustGoToNetworkCallback;
    id /* block */ _functionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, nonatomic) GEOLatLng *latLng;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;

- (id)initWithLatLng:(id)a0 accuracy:(double)a1 completionHandler:(id /* block */)a2 errorHandler:(id /* block */)a3 mustGoToNetworkCallback:(id /* block */)a4 callbackQueue:(id)a5 auditToken:(id)a6;
- (void)_performOnCallbackQueue:(id /* block */)a0;
- (void)performMustGoToNetwork;
- (id)initWithLatLng:(id)a0 auditToken:(id)a1 functionHandler:(id /* block */)a2 errorHandler:(id /* block */)a3 callbackQueue:(id)a4;
- (void)performCompletionHandlerWithShiftedCoordinate:(struct { double x0; double x1; })a0 accuracy:(double)a1 function:(id)a2;
- (void).cxx_destruct;
- (void)performErrorHandler:(id)a0;
- (id)_initWithLatLng:(id)a0 accuracy:(double)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3 errorHandler:(id /* block */)a4 mustGoToNetworkCallback:(id /* block */)a5;
- (id)initWithLatLng:(id)a0 accuracy:(double)a1 completionHandler:(id /* block */)a2 errorHandler:(id /* block */)a3 mustGoToNetworkCallback:(id /* block */)a4 callbackQueue:(id)a5;

@end
