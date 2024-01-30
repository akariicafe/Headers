@class NSString, IDSService, NSDictionary;

@interface CRKConcreteIDSLocalPrimitives : NSObject <CRKIDSLocalPrimitives>

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) IDSService *service;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;
- (id)listenForMessageSendsWithHandler:(id /* block */)a0;
- (BOOL)sendMessage:(id)a0 toDestinationAddress:(id)a1 identifier:(id *)a2 error:(id *)a3;
- (id)accountsDebugInfo;
- (id)accountForSourceAppleID:(id)a0;
- (id)listenForMessageReceivesWithHandler:(id /* block */)a0;
- (id)listenForAccountAdditionsWithHandler:(id /* block */)a0;

@end
