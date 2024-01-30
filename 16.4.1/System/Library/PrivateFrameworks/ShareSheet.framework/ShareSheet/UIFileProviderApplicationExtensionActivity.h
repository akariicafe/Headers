@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) LSPlugInKitProxy *pluginProxy;
@property (retain, nonatomic) NSArray *groupContainerURLs;

- (void).cxx_destruct;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (BOOL)_sharesGroupContainerWithURL:(id)a0;
- (id)initWithApplicationExtension:(id)a0;

@end
