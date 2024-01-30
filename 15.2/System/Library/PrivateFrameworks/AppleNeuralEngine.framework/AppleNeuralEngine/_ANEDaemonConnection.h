@class NSXPCConnection;

@interface _ANEDaemonConnection : NSObject <_ANEDaemonProtocol>

@property (readonly, nonatomic) NSXPCConnection *daemonConnection;
@property (readonly, nonatomic) BOOL restricted;

+ (id)daemonConnection;
+ (id)daemonConnectionRestricted;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithMachServiceName:(id)a0 restricted:(BOOL)a1;
- (void)beginRealTimeTaskWithReply:(id /* block */)a0;
- (void)endRealTimeTaskWithReply:(id /* block */)a0;
- (void)echo:(id)a0 withReply:(id /* block */)a1;
- (void)compileModel:(id)a0 sandboxExtension:(id)a1 options:(id)a2 qos:(unsigned int)a3 withReply:(id /* block */)a4;
- (void)loadModel:(id)a0 sandboxExtension:(id)a1 options:(id)a2 qos:(unsigned int)a3 withReply:(id /* block */)a4;
- (void)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 withReply:(id /* block */)a3;
- (void)compiledModelExistsFor:(id)a0 withReply:(id /* block */)a1;
- (void)purgeCompiledModel:(id)a0 withReply:(id /* block */)a1;
- (void)compiledModelExistsMatchingHash:(id)a0 withReply:(id /* block */)a1;
- (void)purgeCompiledModelMatchingHash:(id)a0 withReply:(id /* block */)a1;

@end
