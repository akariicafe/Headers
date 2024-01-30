@class NSXPCConnection;

@interface TailspinSymbolicationClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)invalidateConnection;
- (void).cxx_destruct;
- (id)symbolicateUUID:(id)a0 pid:(int)a1 path:(id)a2 offsets:(id)a3 options:(id)a4;
- (void)_initConnection;

@end
