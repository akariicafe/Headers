@class NSString;

@interface FakeSecuritydXPCClient : NSObject <SecuritydXPCClientInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protocolWithSync:(BOOL)a0 errorHandler:(id /* block */)a1;
- (id)init;

@end
