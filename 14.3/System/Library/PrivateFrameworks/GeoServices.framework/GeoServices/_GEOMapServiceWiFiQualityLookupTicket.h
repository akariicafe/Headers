@class NSString, GEOWiFiQualityServiceRequest;

@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket <GEOMapServiceWiFiQualityNetworkSearchTicket, GEOMapServiceWiFiQualityLocationSearchTicket, GEOMapServiceWiFiQualityTileLoadTicket> {
    GEOWiFiQualityServiceRequest *_request;
    NSString *_tileKey;
    NSString *_eTag;
    NSString *_requestID;
}

@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } dataRequestKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequestID:(id)a0;
- (void).cxx_destruct;
- (void)cancelNetworkSearch;
- (id)initWithTileKey:(id)a0 eTag:(id)a1 requestId:(id)a2;
- (void)submitNetworkSearchWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)submitLocationSearchWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)cancelTileLoad;
- (void)submitTileLoadWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)cancelLocationSearch;
- (id)initWithRequest:(id)a0 requestId:(id)a1;
- (void)_cancel;

@end
