@class FPXExtensionContext, NSString, NSXPCInterface;

@interface FPXXPCListenerDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) FPXExtensionContext *context;
@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) id exportedObject;
@property (copy, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
