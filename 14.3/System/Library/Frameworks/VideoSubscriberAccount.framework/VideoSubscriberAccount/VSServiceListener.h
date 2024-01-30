@class NSArray, NSString, NSMutableSet, NSXPCInterface;

@interface VSServiceListener : NSObject <VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate>

@property (retain, nonatomic) NSMutableSet *connectionHandlers;
@property (copy, nonatomic) NSArray *entitlementNames;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (retain, nonatomic) id exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)connectionHandlerDidFinish:(id)a0;
- (void)_addConnectionHandler:(id)a0;
- (void)_removeConnectionHandler:(id)a0;

@end
