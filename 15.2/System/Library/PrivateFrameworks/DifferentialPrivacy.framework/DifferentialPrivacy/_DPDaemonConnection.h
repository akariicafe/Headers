@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;
+ (id)daemonAgentConnection;

- (void)retireReports:(id)a0 withReply:(id /* block */)a1;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbersVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (id)initWithServiceName:(id)a0 options:(unsigned long long)a1;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)recordFloatVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (void)dealloc;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;

@end
