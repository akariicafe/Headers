@class NSXPCConnection;

@interface PerfPowerTelemetryReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (void).cxx_destruct;
- (id)createXPCConnection;
- (void)closeXPCConnection;
- (id)postDataRequest:(id)a0 outError:(id *)a1;

@end
