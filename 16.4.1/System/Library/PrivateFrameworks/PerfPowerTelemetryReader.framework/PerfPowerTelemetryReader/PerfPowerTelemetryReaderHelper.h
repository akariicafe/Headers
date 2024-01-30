@class NSXPCConnection;

@interface PerfPowerTelemetryReaderHelper : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToServer;

- (id)createXPCConnection;
- (void)closeXPCConnection;
- (void).cxx_destruct;
- (id)postDataRequest:(id)a0 outError:(id *)a1;

@end
