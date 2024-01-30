@class NSString, NSBundle, NSArray;

@interface BSPluginManager : NSObject

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSString *pluginDirectory;
@property (readonly, copy, nonatomic) NSArray *pluginBundles;

+ (id)mainManager;

- (id)pluginBundlesForType:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)pluginBundleForIdentifier:(id)a0;
- (id)pluginBundleForName:(id)a0 type:(id)a1;

@end
