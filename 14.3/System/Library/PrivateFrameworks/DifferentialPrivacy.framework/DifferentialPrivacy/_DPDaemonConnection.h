@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;
+ (id)daemonAgentConnection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServiceName:(id)a0 options:(unsigned long long)a1;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (void)retireReports:(id)a0 withReply:(id /* block */)a1;

@end
