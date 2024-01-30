@interface TSBlockingPluginManager : NSObject {
    void /* unknown type, empty encoding */ plugins;
    void /* unknown type, empty encoding */ pluginModels;
    void /* unknown type, empty encoding */ viewControllers;
    void /* unknown type, empty encoding */ dataLock;
    void /* unknown type, empty encoding */ viewControllersLock;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ pluginManager;

- (struct CGSize { double x0; double x1; })waitForSizeForIdentifier:(id)a0;
- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (void)relayoutAll;
- (id)viewControllerForIdentifier:(id)a0;
- (BOOL)containsPluginForIdentifier:(id)a0;
- (void)registerAndInitializePlugin:(id)a0;

@end
