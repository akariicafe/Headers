@class NSString, NSXPCConnection, SHShazamKitServiceConnectionClient, SHShazamKitServiceConnectionProvider;

@interface SHShazamKitServiceConnection : NSObject <SHShazamKitService>

@property (readonly, nonatomic) SHShazamKitServiceConnectionProvider *connectionProvider;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) SHShazamKitServiceConnectionClient *shazamKitClient;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } connectionLock;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConnectionProvider:(id)a0;
- (void)tearDownConnection;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopRecognition;
- (void)attachDefaultConnectionHandlers;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_queryLibraryWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)_synchronizeSnapshot:(id)a0 startCondition:(id)a1;
- (void)matcher:(id)a0 didProduceResponse:(id)a1;
- (id /* block */)matcherDelegateErrorHandlerForSignature:(id)a0;
- (void)mediaItemForShazamID:(id)a0 completionHandler:(id /* block */)a1;
- (oneway void)sendEventSignal:(id)a0;
- (void)startRecognitionForRequest:(id)a0;
- (void)stopRecognitionForRequestID:(id)a0;

@end
