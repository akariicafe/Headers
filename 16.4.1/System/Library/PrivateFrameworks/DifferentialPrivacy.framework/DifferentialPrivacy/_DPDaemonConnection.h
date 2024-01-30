@class NSXPCConnection;

@interface _DPDaemonConnection : NSObject <_DPDaemonProtocol>

@property (readonly, nonatomic) NSXPCConnection *daemonConnection;

+ (id)daemonConnection;

- (void)reportsNotYetSubmittedWithReply:(id /* block */)a0;
- (void)recordStrings:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)retireReports:(id)a0 withReply:(id /* block */)a1;
- (void)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordBitVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordFloatVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordWords:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbers:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)recordNumbersVectors:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;
- (void)dealloc;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (id)init;
- (void)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void)recordNumbers:(id)a0 metadata:(id)a1 forKey:(id)a2 withReply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)recordBitValues:(id)a0 forKey:(id)a1 withReply:(id /* block */)a2;

@end
