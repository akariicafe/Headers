@class NSString, NSXPCConnection;

@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (void)invalidate;
- (void)handleDelegatedDoublePressEvent;
- (void)_resyncState;

@end
