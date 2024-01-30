@interface Libsysdiagnose : NSObject

+ (id)sysdiagnoseWithMetadata:(id)a0 withError:(id *)a1;
+ (id)setupConnection;
+ (int)addErrorString:(id)a0 WithCode:(id)a1 forError:(id *)a2;
+ (BOOL)verifyReply:(id)a0 withExpectedType:(struct _xpc_type_s { } *)a1 forError:(id *)a2;
+ (void)createMetrics:(id *)a0 fromResponse:(id)a1;
+ (id)getSysdiagnoseCrashLog;
+ (id)createSysdiagnoseRequest:(id)a0;
+ (id)sendSysdiagnoseRequest:(id)a0 withMetrics:(id *)a1 withError:(id *)a2 withProgressHandler:(id /* block */)a3;
+ (id)sysdiagnoseWithMetadata:(id)a0 withMetrics:(id *)a1 withError:(id *)a2 withProgressHandler:(id /* block */)a3;
+ (id)sysdiagnoseWithMetadata:(id)a0 withMetrics:(id *)a1 withError:(id *)a2 withProgressCallback:(id /* block */)a3;
+ (id)fetchRemoteDiagnosticIDsWithError:(id *)a0;
+ (id)sysdiagnoseWithMetadata:(id)a0 withMetrics:(id *)a1 withError:(id *)a2;
+ (void)sysdiagnoseWithMetadata:(id)a0 onCompletion:(id /* block */)a1;
+ (id)sysdiagnoseWithMetadata:(id)a0 withError:(id *)a1 andProgressHandler:(id /* block */)a2;
+ (id)sysdiagnoseWithMetadata:(id)a0 withError:(id *)a1 withProgressHandler:(id /* block */)a2;
+ (BOOL)isSysdiagnoseInProgressWithError:(id *)a0;
+ (BOOL)cancelActiveSysdiagnoseWithError:(id *)a0;
+ (id)fetchDiagnosticIDFromDeviceSource:(unsigned long long)a0 WithMaxCount:(unsigned long long)a1 withError:(id *)a2;

@end
