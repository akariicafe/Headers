@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (id)applicationType;
- (void)setIsEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)itemID;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (BOOL)showInBrowser;
- (id)version;
- (BOOL)isBetaPlugin;
- (BOOL)isLaunchProhibited;
- (BOOL)showableInBrowser;
- (BOOL)isEnabled;
- (id)plugin;
- (BOOL)isStickerPackOnly;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;

@end
