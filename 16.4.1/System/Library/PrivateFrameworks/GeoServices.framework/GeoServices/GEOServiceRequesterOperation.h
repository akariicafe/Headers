@class GEODataRequestThrottlerToken, NSString, GEOProtobufSessionTask, PBRequest, NSURL, GEOApplicationAuditToken, GEOMapServiceTraits;
@protocol GEOServiceRequestConfiguring;

@interface GEOServiceRequesterOperation : NSObject <GEOProtobufSessionTaskDelegate, GEOServiceRequesterOperation> {
    GEOProtobufSessionTask *_task;
    BOOL _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id /* block */ _willSendRequestHandler;
    id /* block */ _validationHandler;
    id /* block */ _completionHandler;
    NSURL *_url;
    id<GEOServiceRequestConfiguring> _config;
    NSString *_appIdentifier;
    GEOApplicationAuditToken *_auditToken;
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _dataRequestKind;
    GEOMapServiceTraits *_traits;
    double _timeout;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (void)protobufSession:(id)a0 didCompleteTask:(id)a1;
- (id)initWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 willSendRequestHandler:(id /* block */)a5 validationHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;
- (id)protobufSession:(id)a0 validateResponse:(id)a1;
- (void)cancel;
- (void)dealloc;
- (void)_captureNetworkEventForTask;
- (void)start;
- (void)protobufSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (id)_fullURL;
- (void).cxx_destruct;

@end
