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

- (id)connectionInvocation;
- (id)connectionProtocol;
- (id)hostObjectInterface;
- (void).cxx_destruct;
- (SEL)connectionSelector;
- (id)exportedInterface;

@end
