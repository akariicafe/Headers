@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PKDaemonClient : NSObject

@property (retain) NSObject<OS_xpc_object> *pkd;
@property (retain) NSObject<OS_dispatch_queue> *replyQueue;
@property long long protocolVersion;

+ (id)convertToXPC:(id)a0 version:(unsigned long long)a1;

- (void)set:(id)a0 plugins:(id)a1;
- (id)request:(const char *)a0 paths:(id)a1;
- (void)accessPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)bulkSetPluginAnnotations:(id)a0 reply:(id /* block */)a1;
- (id)request:(const char *)a0;
- (void)copyReceipt:(id /* block */)a0;
- (void)matchPlugIns:(id)a0 flags:(unsigned long long)a1 uuid:(id)a2 reply:(id /* block */)a3;
- (void)holdPlugins:(id)a0 extensionPointName:(id)a1 platforms:(id)a2 flags:(unsigned long long)a3 reply:(id /* block */)a4;
- (id)errorInReply:(id)a0;
- (void)set:(id)a0 uuids:(id)a1;
- (id)initWithServiceName:(const char *)a0;
- (void).cxx_destruct;
- (void)removePlugIns:(id)a0 reply:(id /* block */)a1;
- (void)addPlugIns:(id)a0 reply:(id /* block */)a1;
- (void)send:(id)a0 reply:(id /* block */)a1;
- (id)convertFromXPC:(id)a0;
- (void)releaseHold:(id)a0 flags:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)sendSynchronously:(BOOL)a0 request:(id)a1 retry:(BOOL)a2 reply:(id /* block */)a3;
- (void)findPlugInByUUID:(id)a0 reply:(id /* block */)a1;
- (void)findPlugInByPathURL:(id)a0 reply:(id /* block */)a1;
- (void)sendSynchronously:(BOOL)a0 request:(id)a1 reply:(id /* block */)a2;
- (void)readyPlugIns:(id)a0 synchronously:(BOOL)a1 flags:(unsigned long long)a2 environment:(id)a3 languages:(id)a4 reply:(id /* block */)a5;
- (void)setPluginAnnotations:(id)a0 annotations:(id)a1 reply:(id /* block */)a2;
- (id)initWithServiceName:(const char *)a0 user:(unsigned int)a1;
- (void)bulkPlugins:(unsigned long long)a0 reply:(id /* block */)a1;

@end
