@class NSString, NSXPCInterface;

@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface> {
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteViewControllerInterface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interfaceWithExportedInterface:(id)a0 remoteViewControllerInterface:(id)a1;

- (id)connectionProtocol;
- (void).cxx_destruct;
- (id)connectionInvocation;
- (id)hostObjectInterface;
- (id)exportedInterface;
- (SEL)connectionSelector;

@end
