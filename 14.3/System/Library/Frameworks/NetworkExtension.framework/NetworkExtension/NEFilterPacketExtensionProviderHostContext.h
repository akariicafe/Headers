@class NSString;

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;

- (void)createPacketChannelWithCompletionHandler:(id /* block */)a0;

@end
