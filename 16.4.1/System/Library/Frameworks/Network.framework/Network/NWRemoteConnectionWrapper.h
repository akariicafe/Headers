@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject

@property (retain) NSUUID *clientID;
@property (retain) NWConnection *connection;

- (void).cxx_destruct;

@end
