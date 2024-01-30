@class NSString, NSXPCConnection;
@protocol OSASyncProxyServices;

@interface OSASyncProxyClient : NSObject <OSASyncProxyServices> {
    NSXPCConnection *_connection;
    id<OSASyncProxyServices> _synchRemoteObjectProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithErrorHandler:(id /* block */)a0;
- (void)request:(id)a0 logListWithOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)request:(id)a0 transferLog:(id)a1 withOptions:(id)a2 onComplete:(id /* block */)a3;
- (void)request:(id)a0 transferGroupWithOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)requestProxyMetadata:(id)a0 onComplete:(id /* block */)a1;
- (void)deliver:(id)a0 tasking:(id)a1 taskId:(id)a2 fromBlob:(id)a3;
- (void)synchronize:(id)a0 withOptions:(id)a1 onComplete:(id /* block */)a2;
- (void)listDevices:(id /* block */)a0;
- (void)request:(id)a0 logList:(id /* block */)a1;
- (void)request:(id)a0 transferLog:(id)a1 onComplete:(id /* block */)a2;

@end
