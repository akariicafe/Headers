@class FBSDisplayLayoutMonitor, NSMutableDictionary, BKSApplicationStateMonitor, NSObject;
@protocol OS_dispatch_queue;

@interface SUICApplicationStateHelper : NSObject {
    BKSApplicationStateMonitor *_appStateMonitor;
    FBSDisplayLayoutMonitor *_displayLayoutMonitor;
    FBSDisplayLayoutMonitor *_carplayDisplayLayoutMonitor;
    NSMutableDictionary *_foregroundAppInfos;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_foregroundAppInfosFor:(long long)a0;
- (void)_updateForAppInfoDictionaries:(id)a0;
- (void)_updateForAppInfoDictionaries:(id)a0 displayType:(id)a1;
- (void)_handleApplicationStateUpdate:(id)a0;
- (void)dealloc;
- (id)foregroundAppInfosForCarPlay;
- (id)init;
- (id)foregroundAppInfos;
- (void).cxx_destruct;
- (void)_appInfoDictionariesForDisplayLayout:(id)a0 completion:(id /* block */)a1;

@end
