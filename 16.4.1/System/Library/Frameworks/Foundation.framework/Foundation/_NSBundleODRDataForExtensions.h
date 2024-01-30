@class NSString, NSXPCConnection;

@interface _NSBundleODRDataForExtensions : _NSBundleODRDataCommon <NSXPCListenerDelegate, _NSBundleResourceRequestAppExtensionProtocol> {
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)accessSandboxExtension:(id)a0;
- (void)hostApplicationAssetPacksBecameAvailable:(id)a0;
- (void)hostApplicationAssetPacksBecameUnavailable:(id)a0;

@end
