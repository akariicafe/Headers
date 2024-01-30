@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (id)init;
- (void).cxx_destruct;
- (void)_loadPPTBundles;
- (id)builtinTests;
- (void)registerDriverClass:(Class)a0;
- (Class)classForTestType:(id)a0;

@end
