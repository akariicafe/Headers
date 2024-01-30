@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INCExtensionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_extensions;
    NSMutableDictionary *_killTimers;
}

+ (void)initialize;
+ (id)sharedManager;

- (void)_manageExtension:(id)a0 requestIdentifier:(id)a1;
- (void)_resetKillTimerForExtensionWithBundleIdentifier:(id)a0;
- (void)killExtension:(id)a0 requestIdentifier:(id)a1 afterTimeout:(double)a2;
- (void)fetchExtensionForIntent:(id)a0 extensionInputItems:(id)a1 requiresTCC:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)isExtensionLoadedForExtensionBundleIdentifier:(id)a0;
- (id)init;
- (void)_killExtensionWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
