@class NSString, Protocol;

@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    id _exportedObject;
    Protocol *_exportedInterfaceProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWithExportedObject:(id)a0 exportedInterfaceProtocol:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
