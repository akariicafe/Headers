@class NSString, NSXPCConnection;
@protocol SHXPCServiceProxy;

@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<SHXPCServiceProxy> proxy;
@property (copy, nonatomic) id /* block */ connectionErrorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (weak, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (oneway void)stop;
- (void)sendEventSignal:(id)a0;
- (void)_synchronizeSnapshot:(id)a0 trigger:(id)a1;
- (void)mediaItemForShazamID:(id)a0 completionHandler:(id /* block */)a1;
- (void)startRecognitionForRequest:(id)a0;
- (void)_libraryInfoWithCompletionHandler:(id /* block */)a0;
- (void)_fetchLibraryTracksWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (void)attachDefaultConnectionHandlers;
- (void)removeDefaultConnectionHandlers;

@end
