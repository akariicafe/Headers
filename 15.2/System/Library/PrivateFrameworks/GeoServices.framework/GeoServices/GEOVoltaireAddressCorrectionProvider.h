@class NSString, GEOProtobufSession, GEOProtobufSessionTask;

@interface GEOVoltaireAddressCorrectionProvider : NSObject <GEOProtobufSessionTaskDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession;
@property (retain, nonatomic) GEOProtobufSessionTask *initializationTask;
@property (retain, nonatomic) GEOProtobufSessionTask *updateTask;
@property (copy, nonatomic) id /* block */ initFinishedHandler;
@property (copy, nonatomic) id /* block */ initErrorHandler;
@property (copy, nonatomic) id /* block */ updateFinishedHandler;
@property (copy, nonatomic) id /* block */ updateErrorHandler;

+ (id)acInitURL;
+ (BOOL)acInitNeedsProxy;
+ (id)acUpdateURL;
+ (BOOL)acUpdateNeedsProxy;

- (void)protobufSession:(id)a0 didCompleteTask:(id)a1;
- (void)cancelRequest;
- (void)startInitRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;
- (void)startUpdateRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)didCompleteInitTask;
- (void)didCompleteUpdateTask;
- (id)cancelError;

@end
