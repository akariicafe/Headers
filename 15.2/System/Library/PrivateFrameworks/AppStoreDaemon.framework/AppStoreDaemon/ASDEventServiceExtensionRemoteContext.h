@class NSString, ASDEventServiceExtension;

@interface ASDEventServiceExtensionRemoteContext : ASDEventServiceExtensionContext <ASDEventServiceExtensionRemoteXPCInterface>

@property (retain, nonatomic) ASDEventServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didReceiveInstallationEvent:(id)a0;

@end
