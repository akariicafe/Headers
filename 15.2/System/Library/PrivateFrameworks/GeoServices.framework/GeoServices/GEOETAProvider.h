@class GEOMapServiceTraits, NSString, GEOProtobufSession, GEOProtobufSessionTask, GEOETATrafficUpdateRequest, NSObject, GEOApplicationAuditToken;
@protocol OS_dispatch_queue;

@interface GEOETAProvider : NSObject <GEOProtobufSessionTaskDelegate> {
    GEOApplicationAuditToken *_auditToken;
    GEOMapServiceTraits *_traits;
    BOOL _cancelled;
    struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _didStart;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *task;
@property (retain) GEOETATrafficUpdateRequest *currentRequest;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ willSendRequestHandler;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;

- (void)protobufSession:(id)a0 didCompleteTask:(id)a1;
- (void)cancelRequest;
- (void)protobufSession:(id)a0 willSendRequest:(id)a1 forTask:(id)a2 completionHandler:(id /* block */)a3;
- (id)protobufSession:(id)a0 validateResponse:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)didCompleteTask;
- (void)startRequest:(id)a0 connectionProperties:(id)a1 willSendRequest:(id /* block */)a2 finished:(id /* block */)a3 error:(id /* block */)a4;
- (void)startRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;
- (void)_startRequest:(id)a0 connectionProperties:(id)a1 willSendRequest:(id /* block */)a2 finished:(id /* block */)a3 error:(id /* block */)a4;
- (id)initWithAuditToken:(id)a0 traits:(id)a1;
- (void)updateRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;

@end
