@interface TSPluginManager : NSObject {
    void /* unknown type, empty encoding */ plugins;
    void /* unknown type, empty encoding */ pluginViewControllers;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ pluginContainerController;

- (void)removeAll;
- (id)init;
- (void).cxx_destruct;
- (BOOL)stashViewController:(id)a0;
- (id)pluginForIdentifier:(id)a0;
- (BOOL)containsPluginForViewController:(id)a0;
- (void)removePlugin:(id)a0;
- (void)addPlugin:(id)a0;

@end
