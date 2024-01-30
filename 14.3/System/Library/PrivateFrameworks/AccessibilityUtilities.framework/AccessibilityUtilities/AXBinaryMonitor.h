@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AXBinaryMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *bundleHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *frameworkHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *dylibHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *appHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *appExtensionHandlerMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *binaryMonitorQueue;

+ (id)sharedInstance;
+ (void)initialize;

- (void)addHandler:(id /* block */)a0 forBundleName:(id)a1;
- (id)init;
- (BOOL)_loadImageIsBundle:(id)a0;
- (void).cxx_destruct;
- (void)addHandler:(id /* block */)a0 forFramework:(id)a1;
- (id)_bundleNameAndType:(id)a0;
- (id)_appExtensionNameForImage:(id)a0;
- (id)_appNameForImage:(id)a0;
- (id)_bundleNameForImage:(id)a0;
- (void)addHandler:(id /* block */)a0 forBundleID:(id)a1;
- (BOOL)_loadImageIsApp:(id)a0;
- (void)addHandler:(id /* block */)a0 forApp:(id)a1;
- (void)_handleLoadedImagePath:(id)a0;
- (id)_frameworkNameForImage:(id)a0;
- (id)_dylibNameForImage:(id)a0;
- (void)_applyHandlerBlocks:(id)a0 handlerMap:(id)a1;
- (BOOL)_loadImageIsFramework:(id)a0;
- (void)_addHandler:(id /* block */)a0 withName:(id)a1 toMap:(id *)a2;
- (void)evaluateExistingBinaries;
- (BOOL)_loadImageIsDylib:(id)a0;
- (BOOL)_loadImageIsAppExtension:(id)a0;
- (void)addHandler:(id /* block */)a0 forDylib:(id)a1;
- (void)addHandler:(id /* block */)a0 forAppExtension:(id)a1;

@end
