@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)currentConfigurationWithError:(id *)a0;
- (void)dealloc;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
