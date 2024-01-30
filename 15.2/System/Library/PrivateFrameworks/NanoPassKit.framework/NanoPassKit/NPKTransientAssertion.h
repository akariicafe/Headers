@class NSString, NSXPCConnection;

@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_remoteObjectProxy;
- (void)handleDelegatedDoublePressEvent;
- (void)didEnterFieldForPassWithUniqueID:(id)a0;
- (void)_resyncState;

@end
