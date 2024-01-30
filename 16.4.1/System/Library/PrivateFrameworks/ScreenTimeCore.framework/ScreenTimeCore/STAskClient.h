@class NSXPCConnection;

@interface STAskClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)respondToAskForTimeRequestWithIdentifier:(id)a0 answer:(long long)a1 error:(id *)a2;

@end
