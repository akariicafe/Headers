@class NSString, GEOProtobufSessionTask, PBRequest, GEOApplicationAuditToken, GEOMapServiceTraits, GEODataRequestThrottlerToken;
@protocol GEOServiceRequestConfiguring;

@interface _GEODataSessionTaskRequesterOp : NSObject <GEOProtobufSessionTaskDelegate> {
    GEOProtobufSessionTask *_task;
    BOOL _canceled;
    PBRequest *_request;
    NSString *_debugRequestName;
    id /* block */ _completionHandler;
    id /* block */ _validationHandler;
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

- (void)protobufSession:(id)a0 didCompleteTask:(id)a1;
- (void)_cleanup;
- (void)startWithValidationHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)protobufSession:(id)a0 validateResponse:(id)a1;
- (void).cxx_destruct;
- (id)_fullURL;
- (id)_userInfoForTask:(id)a0;
- (id)initWithRequest:(id)a0 auditToken:(id)a1 config:(id)a2 timeout:(double)a3 dataRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a4 traits:(id)a5 throttleToken:(id)a6;
- (void)dealloc;
- (void)cancel;

@end
