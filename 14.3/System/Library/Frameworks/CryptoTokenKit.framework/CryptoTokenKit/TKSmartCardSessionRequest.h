@class NSDictionary, NSXPCConnection;

@interface TKSmartCardSessionRequest : NSObject

@property (retain) NSDictionary *parameters;
@property (copy) id /* block */ reply;
@property (weak) NSXPCConnection *connection;

- (void).cxx_destruct;

@end
