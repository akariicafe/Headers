@class NSString, NSXPCConnection;

@interface PLRemoteDiagnosticsClient : NSObject <NSXPCListenerDelegate> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_connectionForListenerEndpoint:(id)a0;
+ (id)diagnosticsAgentWithErrorHandler:(id /* block */)a0;

- (void).cxx_destruct;

@end
