@class NSXPCConnection;
@protocol SHXPCServiceProxy, SHXPCFrameworkProxy;

@interface SHShazamXPCServiceProxyConnection : NSObject <SHXPCServiceProxy>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) id<SHXPCServiceProxy> proxy;
@property (copy, nonatomic) id /* block */ connectionErrorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (weak, nonatomic) id<SHXPCFrameworkProxy> matcherDelegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchShazamModuleEnabledStateWithReply:(id /* block */)a0;
- (void)enableShazamModuleWithReply:(id /* block */)a0;
- (void)startRecognitionForRequest:(id)a0;
- (oneway void)stopRecognition;
- (void)attachDefaultConnectionHandlers;

@end
