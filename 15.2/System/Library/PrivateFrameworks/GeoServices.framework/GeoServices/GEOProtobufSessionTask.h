@class NSError, NSString, GEODataRequestThrottlerToken, GEOApplicationAuditToken, PBCodable, NSObject, GEOClientMetrics, GEOProtobufSession;
@protocol GEOProtobufSessionTaskDelegate, OS_dispatch_queue, GEODataSessionTask;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {
    struct { int type; union { int raw; int tile; int placeRequest; } subtype; } _requestKind;
    GEOApplicationAuditToken *_auditToken;
    GEODataRequestThrottlerToken *_throttleToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL completedAsCancelled;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) PBCodable *response;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } requestKind;
@property (readonly, nonatomic) Class responseClass;
@property (retain, nonatomic) id<GEODataSessionTask> dataTask;
@property (weak, nonatomic) GEOProtobufSession *session;
@property (weak, nonatomic) id<GEOProtobufSessionTaskDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) BOOL completedAsCancelled;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) PBCodable *response;
@property (readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property (readonly, nonatomic) unsigned long long incomingPayloadSize;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) unsigned long long requestedMultipathServiceType;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) unsigned int requestTypeCode;

- (id)parseResponseFromResponseData:(id)a0;
- (void)dataSession:(id)a0 didCompleteTask:(id)a1;
- (void)start;
- (void)_decodeResponseFromTask:(id)a0 completion:(id /* block */)a1;
- (void)completeWithErrorCode:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)parseProtocolVersionWithReader:(id)a0;
- (void)dataSession:(id)a0 didCompleteSubtask:(id)a1 completion:(id /* block */)a2;
- (BOOL)parsePreambleWithReader:(id)a0;
- (void)dataSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancel;
- (void)completeWithCancelled:(BOOL)a0 error:(id)a1 response:(id)a2;
- (id)initWithSession:(id)a0 requestTypeCode:(unsigned int)a1 responseClass:(Class)a2 delegate:(id)a3 delegateQueue:(id)a4 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a5 auditToken:(id)a6 throttleToken:(id)a7;
- (id)parseInnerProtobufFromData:(id)a0;
- (BOOL)parseResponseTypeWithReader:(id)a0;

@end
