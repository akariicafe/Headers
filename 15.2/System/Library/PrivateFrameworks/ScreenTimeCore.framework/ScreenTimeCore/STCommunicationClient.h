@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (id)currentConfigurationWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
