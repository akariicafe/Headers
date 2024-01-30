@class NSString, NSXPCConnection;

@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_remoteObjectProxy;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)handleDelegatedDoublePressEvent;
- (void)_resyncState;
- (void)didEnterFieldForPassWithUniqueID:(id)a0;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)a0;

@end
