@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PKDaemonClient : NSObject

@property (retain) NSObject<OS_xpc_object> *pkd;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property long long protocolVersion;

+ (id)convertToXPC:(id)a0 version:(unsigned long long)a1;

- (void)removePlugIns:(id)a0 reply:(id /* block */)a1;
- (id)errorInReply:(id)a0;
- (void)bulkSetPluginAnnotations:(id)a0 reply:(id /* block */)a1;
- (void)send:(id)a0 reply:(id /* block */)a1;
- (id)request:(const char *)a0 paths:(id)a1;
- (void)matchPlugIns:(id)a0 flags:(unsigned long long)a1 uuid:(id)a2 reply:(id /* block */)a3;
- (void)sendSynchronously:(BOOL)a0 request:(id)a1 retry:(BOOL)a2 reply:(id /* block */)a3;
- (void)releaseHold:(id)a0 flags:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)initWithServiceName:(const char *)a0;
- (id)initWithServiceName:(const char *)a0 user:(unsigned int)a1;
- (void)addPlugIns:(id)a0 reply:(id /* block */)a1;
- (void)set:(id)a0 plugins:(id)a1;
- (void)readyPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 environment:(id)a3 languages:(id)a4 persona:(id)a5 sandbox:(id)a6 reply:(id /* block */)a7;
- (id)request:(const char *)a0;
- (void)set:(id)a0 uuids:(id)a1;
- (id)rawConnection;
- (void)bulkPlugins:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)sendSynchronously:(BOOL)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)findPlugInByUUID:(id)a0 reply:(id /* block */)a1;
- (void)holdPlugins:(id)a0 extensionPointName:(id)a1 platforms:(id)a2 flags:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)findPlugInByPathURL:(id)a0 reply:(id /* block */)a1;
- (id)convertFromXPC:(id)a0;
- (void)copyReceipt:(id /* block */)a0;
- (void)setPluginAnnotations:(id)a0 annotations:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (void)accessPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)initWithConnection:(id)a0 queue:(id)a1 user:(unsigned int)a2;

@end
