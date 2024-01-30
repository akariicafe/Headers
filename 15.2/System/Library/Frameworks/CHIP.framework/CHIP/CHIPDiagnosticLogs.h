@interface CHIPDiagnosticLogs : CHIPCluster

@property (readonly) struct DiagnosticLogsCluster { void /* function */ **_vptr$ClusterBase; unsigned int mClusterId; struct Device *mDevice; unsigned short mEndpoint; } cppCluster;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct ClusterBase { void /* function */ **x0; unsigned int x1; struct Device *x2; unsigned short x3; } *)getCluster;
- (void)retrieveLogsRequest:(unsigned char)a0 requestedProtocol:(unsigned char)a1 transferFileDesignator:(id)a2 responseHandler:(id /* block */)a3;

@end
