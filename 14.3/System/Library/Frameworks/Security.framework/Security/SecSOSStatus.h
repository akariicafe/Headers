@class NSXPCConnection;

@interface SecSOSStatus : NSObject

@property (retain) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;

@end
