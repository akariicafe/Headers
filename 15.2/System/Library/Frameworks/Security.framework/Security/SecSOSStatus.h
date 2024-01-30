@class NSXPCConnection;

@interface SecSOSStatus : NSObject

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;

@end
