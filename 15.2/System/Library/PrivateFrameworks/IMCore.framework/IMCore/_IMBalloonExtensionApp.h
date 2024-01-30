@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (void)setIsEnabled:(BOOL)a0;
- (BOOL)isLaunchProhibited;
- (BOOL)isEnabled;
- (BOOL)isBetaPlugin;
- (id)initWithPluginBundle:(id)a0 pluginKitProxy:(id)a1 extension:(id)a2;
- (id)version;
- (id)applicationType;
- (void).cxx_destruct;
- (id)itemID;
- (BOOL)showableInBrowser;
- (BOOL)showInBrowser;
- (id)plugin;
- (BOOL)isStickerPackOnly;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1;
- (id)initWithPluginBundle:(id)a0 extension:(id)a1 pluginKitProxyClass:(Class)a2 proxy:(id)a3;

@end
