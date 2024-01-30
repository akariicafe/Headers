@class NSString, NSMutableDictionary, NSMutableSet, NWEntityMapper, NSObject;
@protocol OS_dispatch_queue;

@interface AppStateHandler : NSObject <NWAppStateEventListenerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_appPidState;
    NSMutableDictionary *_appBundlesMonitored;
    NSMutableDictionary *_appsWithStates;
    NSMutableSet *_foregroundApps;
    NWEntityMapper *_entityMapper;
    BOOL _hasAnyForegroundApp;
    BOOL _handlesRnf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAppsWithStates;

- (void)configure:(id)a0;
- (id)foregroundAppKeys;
- (unsigned int)currentStateForProcessWithPid:(int)a0;
- (id)initWithMapper:(id)a0;
- (BOOL)_trackerSetHasForeground:(id)a0;
- (BOOL)hasAnyForegroundApp;
- (void)handleApplicationStateChangeForDisplayName:(id)a0 UUID:(id)a1 pid:(int)a2 state:(unsigned int)a3;
- (void).cxx_destruct;
- (void)purgeInvalidPidState;
- (id)_getAppsWithStates;
- (void)_removeStateTracker:(id)a0 hadForeground:(BOOL *)a1 hasForeground:(BOOL *)a2;

@end
