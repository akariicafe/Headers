@class NSString, XPCClientConnection;
@protocol XPCNSClientConnectionDelegate;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {
    XPCClientConnection *_clientConnection;
}

@property (readonly, nonatomic) id<XPCNSClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 delegate:(id)a1;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)XPCClientConnection:(id)a0 didReceiveRequest:(id)a1;
- (void)sendMessage:(id)a0 data:(id)a1 withHandler:(id /* block */)a2;
- (void)sendMessageReliably:(id)a0 data:(id)a1 maxRetryCount:(int)a2 withHandler:(id /* block */)a3;

@end
