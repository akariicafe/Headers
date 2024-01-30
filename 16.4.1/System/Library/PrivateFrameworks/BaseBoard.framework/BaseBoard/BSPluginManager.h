@class NSString, NSBundle, NSArray;

@interface BSPluginManager : NSObject

@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, copy, nonatomic) NSString *pluginDirectory;
@property (readonly, copy, nonatomic) NSArray *pluginBundles;

+ (id)mainManager;

- (id)pluginBundleForIdentifier:(id)a0;
- (id)pluginBundleForName:(id)a0 type:(id)a1;
- (id)description;
- (id)pluginBundlesForType:(id)a0;
- (void).cxx_destruct;

@end
