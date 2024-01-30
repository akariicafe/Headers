@class ATService, NSString, NSXPCConnection;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) ATService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id /* block */)a0;
- (void)service:(id)a0 willOpenMessageLink:(id)a1;
- (void)fetchMessageLinksWithCompletion:(id /* block */)a0;
- (id)initWithService:(id)a0 connection:(id)a1;

@end
