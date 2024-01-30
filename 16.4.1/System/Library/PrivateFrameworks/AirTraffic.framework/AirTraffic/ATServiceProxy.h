@class NSString, NSXPCConnection;

@interface ATServiceProxy : ATService <ATServiceObserver>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)messageLinks;
- (void)service:(id)a0 willOpenMessageLink:(id)a1;
- (void)service:(id)a0 willOpenMessageLink:(id)a1 completion:(id /* block */)a2;

@end
