@class NSMutableDictionary;

@interface HKPPTPluginManager : NSObject {
    NSMutableDictionary *_testClasses;
    NSMutableDictionary *_builtinTests;
}

+ (id)sharedPluginManager;

- (id)builtinTests;
- (void)_loadPPTBundles;
- (void)registerDriverClass:(Class)a0;
- (Class)classForTestType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
