@class NSString, BKSApplicationStateMonitor, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SUICApplicationStateHelper : NSObject <FBSDisplayLayoutObserver> {
    BKSApplicationStateMonitor *_appStateMonitor;
    NSMutableDictionary *_foregroundAppInfos;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)_handleApplicationStateUpdate:(id)a0;
- (void)_updateForAppInfoDictionaries:(id)a0 displayType:(id)a1;
- (void)_appInfoDictionariesForDisplayLayout:(id)a0 completion:(id /* block */)a1;
- (id)foregroundAppInfos;
- (void).cxx_destruct;
- (id)foregroundAppInfosForCarPlay;
- (id)init;
- (id)_foregroundAppInfosFor:(long long)a0;
- (void)_updateForAppInfoDictionaries:(id)a0;
- (void)dealloc;

@end
