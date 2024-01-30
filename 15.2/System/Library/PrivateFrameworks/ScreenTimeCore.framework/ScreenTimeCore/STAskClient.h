@class NSXPCConnection;

@interface STAskClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)respondToAskForTimeRequestWithIdentifier:(id)a0 answer:(long long)a1 error:(id *)a2;

@end
